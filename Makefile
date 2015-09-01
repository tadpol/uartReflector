ARDMK_DIR        = ~/Documents/Arduino/Arduino-Makefile-master
MONITOR_PORT     = /dev/tty.usbserial*
MONITOR_BAUDRATE = 115200
BOARD_TAG        = uno
#USER_LIB_PATH    = $(realpath ../libraries)
#ARDUINO_LIBS     = 

include $(ARDMK_DIR)/Arduino.mk

#  vim: set ai noet sw=3 ts=3 :
