#ifndef USBHANDLER_H
#define USBHANDLER_H

//put generic includes here
#include "BluetoothHandler.h"
#include <Arduino.h>
#include <SPI.h>
#include "Adafruit_BLE.h"
#include "Adafruit_BluefruitLE_SPI.h"
#include "Adafruit_BluefruitLE_UART.h"

namespace MiniKeyboard{
	class USBHandler{
	public:
      	USBHandler();                   //function called the default constructor
		~USBHandler();					//Deconstructor called when object is destroyed and the stream is closed

		bool getUSBConnected();			//this should be evident by your construction

		
	    void sendKeyCode(char *);		//try to avoid ever having void returns, if you can always check for a exception called and pass back a int (bool)
		void sendLines(char *);

		BluetoothHandler * bleHan;		//Init this on setup

	private:

	};
}

#endif