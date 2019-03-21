#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>



#define GANYE_DEBUG

#ifdef GANYE_DEBUG
	#define GANYE_PRINTF(fmt,...)\
		printf("%s,%d:"fmt"\n",__func__,__LINE__,##__VA_ARGS__);
#else
	#define GANYE_PRINTK(fmt,...)
#endif

#define		DEV_PATH	"/dev/usr_dev"

int main()
{
	char write_buf[100]  = "ganye is the best!!";

	int fd = open(DEV_PATH,	O_RDWR);
	if( fd < 0 ) goto open_dev_err;
	
	int	size = sizeof(write_buf);
	GANYE_PRINTF("write buf size = %d", size);
	write(fd, write_buf, size);

	close(fd);
	return 0;
	
open_dev_err:
	GANYE_PRINTF("file open err,fd = %d", fd);
	return fd;
}
