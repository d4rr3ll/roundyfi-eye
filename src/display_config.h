// include/display_config.h

#undef ILI9341_DRIVER
#define GC9A01_DRIVER

// #define TFT_SDA_READ

// #define TFT_MOSI 17
// #define TFT_MISO -1
// #define TFT_SCLK 23
// #define TFT_CS 15
// #define TFT_DC 19
// #define TFT_RST 18

// #define TFT_MISO 10
// #define TFT_MOSI 13
// #define TFT_SCLK 14

#define TFT_CS   15  // Chip select control pin
#define TFT_DC   2   // Data Command control pin
#define TFT_RST  16  // Reset pin (could connect to RST pin)

// Optional touch screen pins
//#define TOUCH_CS 16     // Chip select pin (T_CS) of touch screen

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF

#define SMOOTH_FONT

#define SCREEN_SIZE 240
#define TFT_WIDTH SCREEN_SIZE
#define TFT_HEIGHT SCREEN_SIZE

#define SPI_FREQUENCY 27000000

