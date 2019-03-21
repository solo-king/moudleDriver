#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <termios.h>
#include <errno.h>
#include <pthread.h>
#include <sys/ioctl.h>
#include "common.h"

#define RET_SUCCESS                 0
#define RET_FAILED                  -1
#define BUF_SIZE                    512

/* chenqigan */
#define DATA_READ_COMPELE  0
#define DATA_READING  1

int g_iRead_ok=DATA_READING;
/*chenqigan end*/

static SERIAL_BAUD_ST g_attr_baud[] = {
    {230400, B230400}, {115200, B115200},
    {57600, B57600}, {38400, B38400}, 
    {19200, B19200}, {9600, B9600},
    {4800, B4800},  {2400, B2400},
    {1800, B1800}, {1200, B1200},
};

static char g_dev_serial[][32] = {
        "/dev/COM0",
        "/dev/COM1",
};

static int attr_baud_set(int fd, unsigned int baud)
{
    int i; 
    int ret = RET_SUCCESS; 
    struct termios option;

    /* get old serial attribute */
    memset(&option, 0, sizeof(option));
    if (RET_SUCCESS != tcgetattr(fd, &option)) 
    { 
        printf("tcgetattr failed.\n");
        return RET_FAILED;  
    }
    
    for (i = 0; i < ARRAY_SIZE(g_attr_baud);  i++) 
	{ 
        if (baud == g_attr_baud[i].lable) 
        {     
            ret = tcflush(fd, TCIOFLUSH);
            if (RET_SUCCESS != ret)
            {
                printf("tcflush failed.\n");
                break;
            }
            
            ret = cfsetispeed(&option, g_attr_baud[i].baudrate); 
            if (RET_SUCCESS != ret)
            {
                printf("cfsetispeed failed.\n");
                ret = RET_FAILED;
                break;
            }
            
            ret = cfsetospeed(&option, g_attr_baud[i].baudrate); 
            if (RET_SUCCESS != ret)
            {
                printf("cfsetospeed failed.\n");
                ret = RET_FAILED;
                break;
            }
            
            ret = tcsetattr(fd, TCSANOW, &option);  
            if  (RET_SUCCESS != ret) 
            {        
                printf("tcsetattr failed.\n");
                ret = RET_FAILED;
                break;     
            }    
            
            ret = tcflush(fd, TCIOFLUSH);
            if (RET_SUCCESS != ret)
            {
                printf("tcflush failed.\n");
                break;
            }
        }  
    }
    
    return ret;
}

static int attr_other_set(int fd, SERIAL_ATTR_ST *serial_attr)
{ 
	struct termios option;	

    /* get old serial attribute */
    memset(&option, 0, sizeof(option));
    if (RET_SUCCESS != tcgetattr(fd, &option)) 
    { 
        printf("tcgetattr failed.\n");
        return RET_FAILED;  
    }

    option.c_iflag = CLOCAL | CREAD;
    
    /* set datas size */
    option.c_cflag &= ~CSIZE; 
    option.c_iflag = 0;

    switch (serial_attr->databits)
    {   
        case 7:		
            option.c_cflag |= CS7; 
            break;
            
        case 8:     
            option.c_cflag |= CS8;
            break;  
            
        default:    
            printf("invalid argument, unsupport datas size.\n");
            return RET_FAILED;  
    }

    /* set parity */    
    switch (serial_attr->parity) 
    {   
        case 'n':
        case 'N':    
            option.c_cflag &= ~PARENB;   
            option.c_iflag &= ~INPCK;      
            break;  
            
        case 'o':   
        case 'O':    
            option.c_cflag |= (PARODD | PARENB);  
            option.c_iflag |= INPCK;            
            break;  
            
        case 'e':  
        case 'E':   
            option.c_cflag |= PARENB;       
            option.c_cflag &= ~PARODD;   
            option.c_iflag |= INPCK;     
            break;
            
        case 's': 
        case 'S':  
            option.c_cflag &= ~PARENB;
            option.c_cflag &= ~CSTOPB;
            break;  
            
        default:   
            printf("invalid argument, unsupport parity type.\n");
            return RET_FAILED;  
    }  
    
    /* set stop bits  */
    switch (serial_attr->stopbits)
    {   
        case 1:    
            option.c_cflag &= ~CSTOPB;  
            break;  
            
        case 2:    
            option.c_cflag |= CSTOPB;  
            break;
            
        default:    
            printf("invalid argument, unsupport stop bits.\n");
            return RET_FAILED; 
    } 
    
    option.c_oflag = 0;
    option.c_lflag = 0;  
    option.c_cc[VTIME] = TIMEOUT;    
    option.c_cc[VMIN] = MIN_LEN; 

    if (RET_SUCCESS != tcflush(fd,TCIFLUSH))   
    { 
        printf("tcflush failed.\n");
        return RET_FAILED;  
    }
    
    if (RET_SUCCESS != tcsetattr(fd, TCSANOW, &option))   
    { 
        printf("tcsetattr failed.\n");
        return RET_FAILED;  
    }

#if 0	
    tcgetattr(fd, &option);
    DEBUG_INFO("c_iflag: %x\rc_oflag: %x\n", option.c_iflag, option.c_oflag);
    DEBUG_INFO("c_cflag: %x\nc_lflag: %x\n", option.c_cflag, option.c_lflag);
    DEBUG_INFO("c_line: %x\nc_cc[VTIME]: %d\nc_cc[VMIN]: %d\n", option.c_line, option.c_cc[VTIME], option.c_cc[VMIN]);
#endif

    return RET_SUCCESS;  
}

static int attr_set(int fd, SERIAL_ATTR_ST *serial_attr)
{
    int ret = RET_SUCCESS;
    
	if (NULL == serial_attr)
	{
        printf("invalid argument.\n");
        return RET_FAILED;  
	}
    
    if (RET_SUCCESS == ret)
    {
        ret = attr_baud_set(fd, serial_attr->baud);
        if (RET_SUCCESS == ret)
        {
            ret = attr_other_set(fd, serial_attr);
        }
    }

    return ret;
}

static void print_usage(const char *filename)
{
	DEBUG_INFO("Usage: %s [012345]\n", filename);
	DEBUG_INFO("  0 --/dev/ttymxc1   com2 test, used as rs232.\n"
    	       "  1 --/dev/ttymxc2   com3 test, used as rs232.\n"
    	       "  2 --/dev/ttymxc3   com4 test, used as rs232.\n"
    	       "  3 --/dev/ttymxc4   com5 test, used as rs232.\n"
       	       "  4 -- RS485 test, com1 receive, com2 send.\n"
       	       "  5 -- RS485 test, com2 receive, com1 send.\n"
	      );
}

static void *datas_read(void *arg)
{
    int ret, i;
    char read_buf[BUF_SIZE];
    int fd = *(int *)arg;
    int len = 0;

    while(1)
    {
        memset(read_buf, 0, sizeof(read_buf));
        ret = read(fd, read_buf, sizeof(read_buf));
        if (0 != ret)
        {
        	
             printf("receive %d datas: %s\n", ret, read_buf);
	     break;
        }
    }
    
    return NULL;
}



static void *epc_datas_read(void *arg)
{
    int ret, i;
    char read_buf[BUF_SIZE];
    int fd = *(int *)arg;
    int len = 0;

    while(1)
    {
        memset(read_buf, 0, sizeof(read_buf));
        ret = read(fd, read_buf, sizeof(read_buf));
        if (0 != ret)
        {
        	
             printf("receive %d datas: %s\n", ret, read_buf);
	    // g_iRead_ok=DATA_READ_COMPELE;
	    // break;
        }
    }
    
    return NULL;
}

static int rs232_transfer(int fd, char *write_buf, int buf_size)
{
    int ret = RET_SUCCESS;
    pthread_t pid;

    ret = pthread_create(&pid, NULL, datas_read, (void *)&fd);
    if (RET_SUCCESS != ret)
    {
		//printf("can't create thread:%s\n", strerror);
    }
    
    while(1)
    {
        ret = write(fd, write_buf, buf_size);
        if (buf_size != ret)
        {
            ret = RET_FAILED;
            break;
        }
        sleep(1);
    }
    
    pthread_join(pid, NULL);

    return ret;
}

static int serial_rs232_test(int fd, 
                             char *write_buf, 
                             int buf_size)
{
    int ret;
    SERIAL_ATTR_ST serial_attr;

    memset(&serial_attr, 0, sizeof(serial_attr));
    serial_attr.baud = SERIAL_ATTR_BAUD;
    serial_attr.databits = SERIAL_ATTR_DATABITS;
    serial_attr.stopbits = SERIAL_ATTR_STOPBITS;
    serial_attr.parity = SERIAL_ATTR_PARITY;

    ret = attr_set(fd, &serial_attr);
    if (RET_SUCCESS == ret)
    {
        ret = rs232_transfer(fd, write_buf, buf_size);
    }

    return ret;
}

static int RS232_test(int channel)
{
	int fd;
	int bufsize;
	char write_buf[BUF_SIZE];
	DEBUG_INFO("QY-IMX6S-V1.0 RS232 Com%d Start Testing ...\n", channel);
	fd = open(g_dev_serial[channel], O_RDWR);
    if (fd < 0) 
	{
		printf("open serial device %s error!\n", g_dev_serial[channel]);
        return RET_FAILED;
	}

    memset(write_buf,0,sizeof(write_buf));
    snprintf(write_buf, sizeof(write_buf), "Com%d RS232 test string!\n", channel);
    bufsize = strlen(write_buf) + 1;

    serial_rs232_test(fd, write_buf, bufsize);

    return 0;
}

static int RS485_test(int test_item)
{
    int ret;
    int fd_send;
    int fd_rcv;
    int channel_send;
    int channel_rcv;
	SERIAL_ATTR_ST serial_attr;
    pthread_t pid;
    char write_buf[BUF_SIZE];
    int bufsize;

    if (4 == test_item)
    {
        channel_send = 2;
        channel_rcv = 1;
    }
    else
    {
        channel_send = 1;
        channel_rcv = 2;
    }

	DEBUG_INFO("QY-IM6S-V1.0 RS485 Start Testing: Com%d send, Com%d receive...\n", 
	           channel_send, channel_rcv);
    
	fd_send = open(g_dev_serial[channel_send], O_RDWR);
	if (fd_send < 0)
    {
		printf("open serial device %s error!\n", g_dev_serial[channel_send]);
        return RET_FAILED;
    }
    
	fd_rcv = open(g_dev_serial[channel_rcv], O_RDWR);
    if (fd_rcv < 0)
    {
		printf("open serial device %s error!\n", g_dev_serial[fd_rcv]);
        return RET_FAILED;
    }

    memset(write_buf, 0, sizeof(write_buf));    
    snprintf(write_buf, sizeof(write_buf), "this is com%d test datas!\n", channel_send);
    bufsize = strlen(write_buf) + 1;

    memset(&serial_attr, 0, sizeof(serial_attr));
    serial_attr.baud = SERIAL_ATTR_BAUD;
    serial_attr.databits = SERIAL_ATTR_DATABITS;
    serial_attr.stopbits = SERIAL_ATTR_STOPBITS;
    serial_attr.parity = SERIAL_ATTR_PARITY;

    ret = attr_set(fd_send, &serial_attr);
    if (RET_SUCCESS == ret)
    {
        ret = attr_set(fd_rcv, &serial_attr);
        if (RET_SUCCESS == ret)
        {
            ret = pthread_create(&pid, NULL, datas_read, (void *)&fd_rcv);
            if (RET_SUCCESS != ret)
            {
//        		printf("can't create thread:%s\n", strerror);
            }
            
            while(1)
            {
                ret = write(fd_send, write_buf, bufsize);
                if (bufsize != ret)
                {
                    ret = RET_FAILED;
                    break;
                }
                
                sleep(1);
            }

            pthread_join(pid, NULL);
        }
    }

    close(fd_send);
    close(fd_rcv);
    
    return ret;
}

/*   402ft:
波特率 115200,
8 位数据位
无校验
1 位停止位*/
int main(int argc, char *argv[])
{	

	int serial_fd;
	int ret;
	char  at_cmd[1024];
	int cmd_length;
	pthread_t pid;
    if(argc < 2){
        printf("%s COM0/COM1\n",argv[0]);
        return -1;
    }
    printf("argv[1] = %s\n",argv[1]);
    if(!strcmp(argv[1],"COM0")){
        printf("open COM0 \n");
	    serial_fd = open(g_dev_serial[0], O_RDWR);
    }else if (!strcmp(argv[1],"COM1")){
        printf("open COM1 \n");
	    serial_fd = open(g_dev_serial[1], O_RDWR);
    }else{
        printf("argv[1] = %s\n",argv[1]);
    }
		if (serial_fd < 0) 
	{
		printf("open serial device %s error!\n", g_dev_serial[0]);
	    	return RET_FAILED;
	}
	/* serial set */	   
    	SERIAL_ATTR_ST serial_attr;

 	 memset(&serial_attr, 0, sizeof(serial_attr));
    	 serial_attr.baud = SERIAL_ATTR_BAUD;
        serial_attr.databits = SERIAL_ATTR_DATABITS;
        serial_attr.stopbits = SERIAL_ATTR_STOPBITS;
        serial_attr.parity = SERIAL_ATTR_PARITY;

        ret = attr_set(serial_fd, &serial_attr);
	
	/* create reciver */
	ret = pthread_create(&pid, NULL, epc_datas_read, (void*)&serial_fd);
    	if (RET_SUCCESS != ret)
   	 {
		printf("can't create thread\n");
		return RET_FAILED;
   	 }
        
      /* wait 4G mode return information */
	while(g_iRead_ok){
        	memset(at_cmd,0,1024);
        	fgets(at_cmd, 1024, stdin);
	        sprintf((char*)at_cmd,"%s\r\n",at_cmd);
		cmd_length=strlen(at_cmd);
		printf("at_cmd=%s\n",at_cmd);
        	    
	        ret = write(serial_fd, at_cmd, cmd_length);
	      /*  if (cmd_length != ret)
	        {
	        	 close(serial_fd);
	           	 ret = RET_FAILED;
			 return ret;
	       	    }*/
	       	 // sleep(1);
	}
	/*  wait thread close */
	pthread_join(pid, NULL);
	close(serial_fd);
	return RET_SUCCESS;
}
