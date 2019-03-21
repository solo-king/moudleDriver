/*
**  SAMA5D3X function common define 
**  HangZhou QiYang Technology Co.Ltd. 
**  www.qiyangtech.com
*/

#ifndef __AT91_SAMA5_COMMON__
#define __AT91_SAMA5_COMMON__

#define DEBUG

#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))

#ifdef DEBUG
  #define DEBUG_INFO(fmt, args...)  fprintf(stderr, fmt, ##args) 
  #define DEBUG_ERROR(fmt, args...) fprintf(stderr, fmt"%s\t%s\t%d\n", ##args, __FILE__,__FUNCTION__,__LINE__)
#else
  #define DEBUG_INFO(fmt, args...) 
  #define DEBUG_ERROR(fmt, args...)
#endif        

#define RET_SUCCESS                 0
#define RET_FAILED                  -1
#define BUF_SIZE                    512


/* 
* buzzer define
*/
#define DEV_BUZZER                  "/dev/sama5d3x-buzzer"

/* ioctl cmd */
#define IOCTL_BUZZER_ON             _IOW('Q', 0x0, int)
#define IOCTL_BUZZER_OFF            _IOW('Q', 0x1, int)

/* 
* gpio define
*/
#define DEV_GPIO                    "/dev/sama5d3x-gpio"
typedef struct {
	int  gpio_index;
	int  gpio_level;
} IOCTL_GPIO_ARG_ST;

typedef struct {
	char *gpio_name;
	int  gpio_index;
} GPIO_ATTR_ST;

/* ioctl cmd */
#define	IOCTL_GPIO_LEVEL_GET	        _IOW('Q', 0x02, int)   	//get gpio state
#define	IOCTL_GPIO_LEVEL_SET            _IOR('Q', 0x03, int)	//set gpio output state
#define	IOCTL_GPIO_DIR_INPUT_SET	    _IOW('Q', 0x04, int)	//set gpio as a input
  

#define GPIO_LEVEL_LOW                  0
#define GPIO_LEVEL_HIGHT                1


/*
* pwm define
*/
#define DEV_PWM                         "/dev/sama5d3x-pwm"

#define MAX_PERIOD                      (100*1000*1000) /* max period 100s */
#define MIN_PERIOD                      (1)             /* min period 1 us */
#define POLARITY_INVALID                (~0x1)             
#define IOCTL_PWM_START                  _IOW('Q', 0x41, int)
#define IOCTL_PWM_STOP		             _IOW('Q', 0x42, int)
#define IOCTL_PWM_SETARG	             _IOW('Q', 0x43, struct ioctl_atmel_pwm *)
#define IOCTL_PWM_GETARG	             _IOR('Q', 0x44, struct ioctl_atmel_pwm *)

typedef struct {
    unsigned long period;         /* PWM period expressed in us */
    unsigned long duty;           /* PWM duty expressed in us */
    unsigned int polarity;        /* PWM polarity */
    unsigned int channel;         /* PWM channel index :0,1,2,3 */
}IOCTL_PWM_ARG_ST;


/*
* serial define 
*/
typedef struct {
    unsigned int lable;
	unsigned int baudrate;
} SERIAL_BAUD_ST;

typedef struct{
    unsigned int flags;
	unsigned int delay_rts_after_send;	/* delay after send (milliseconds) */
}SERIAL_RS485_CONF_ST;

typedef struct {
    char parity;
	unsigned int baud;
    unsigned int databits;
    unsigned int stopbits;
} SERIAL_ATTR_ST;

#define TIMEOUT                     1  /* read operation timeout 1s = TIMEOUT/10 */
#define MIN_LEN                     128  /* the min len datas */
#define DEV_NAME_LEN                11
#define SERIAL_ATTR_BAUD            115200
#define SERIAL_ATTR_DATABITS        8
#define SERIAL_ATTR_STOPBITS        1
#define SERIAL_ATTR_PARITY          'n'
#define SERIAL_MODE_NORMAL          0
#define SERIAL_MODE_485             1
#define DELAY_RTS_AFTER_SEND        1   /* 1ms */
#define SER_RS485_ENABLED		    1	/* 485 enable */

/*
* key define
*/
typedef struct input_event EVENT_KEY_ST;

typedef struct {
    int code;
    char *key_name;
}KEY_ATTR;

#define DEV_KEY             "/dev/input/event1"
#define EVENT_KEY           0x1
#define EVENT_ACTION_PULLDOWN   "press down"
#define EVENT_ACTION_RELEASEUP  "release up"
#define KEY_X0_PC0          0x100
#define KEY_X1_PC1          0x101
#define KEY_X2_PC2          0x102
#define KEY_X3_PC3          0x103
#define KEY_X4_PC4          0x104
#define KEY_X5_PC5          0x105
#define KEY_X6_PC6          0x106
#define KEY_X7_PC7          0x107

#define KEY_Y0_PC8          0x108
#define KEY_Y1_PC9          0x109
#define KEY_Y2_PC10         0x10a
#define KEY_Y3_PC11         0x10b
#define KEY_Y4_PC12         0x10c
#define KEY_Y5_PC13         0x10d
#define KEY_Y6_PC14         0x10e
#define KEY_Y7_PC15         0x10f


/*
* spi define 
*/
typedef struct spi_ioc_transfer IOCTL_SPI_ARG_ST;

#define DEV_SPI_0           "/dev/spidev32765.0"      /* SPI1_NCS0 on main board */
#define DEV_SPI_1           "/dev/spidev32765.3"      /* SPI1_NCS1 on main board */

#define SPI_WRITE_MSG_LEN   1  
#define SPI_READ_MSG_LEN    1 
#define SPI_TRANSFER_MSG_LEN 2   

/*
* i2c define 
*/
#define DEV_I2C_0           "/dev/i2c-0"
#define DEV_I2C_1           "/dev/i2c-1"

typedef struct {
    char *chip;
    unsigned int slave_addr;
    unsigned int capacity;
}CAT24CW_S;
        
#define CAT24CW16               "cat24wc16" 
#define CAT24CW16_SLAVE_ADDR    0x50
#define CAT24CW16_CAPACITY_LEN  (2*1024)    /* 16K */
#define CAT24CW16_LIMIT_WR_LEN  16     
#define CAT24CW16_REG_ADDR_LEN  2
#define CAT24CW16_LIMIT_RD_LEN  (CAT24CW16_LIMIT_WR_LEN + 1)  
#define CAT24CW16_MEMORY_TEST_ADDR  0x80
#define CAT24CW_WR_DATA_MAX     16
#define CAT24CW_READ_DATA_MAX   (CAT24CW_WR_DATA_MAX - 1)


/*
* RTC
*/
#define DEV_RTC             "/dev/rtc"
#define TEST_TIMES          10

#define TIME_SET_YEAR       114
#define TIME_SET_MON        11
#define TIME_SET_MDAY       11
#define TIME_SET_HOUR       11
#define TIME_SET_MIN        11
#define TIME_SET_SEC        11


/*
* can
*/
#define DEV_CAN             "can0"
#define CAN_TEST_READ       0
#define CAN_TEST_WRITE      1
#define CAN_ID              0x123
#define CAN_DATA_LEN_MAX    8

#endif //__AT91_SAMA5_COMMON__

