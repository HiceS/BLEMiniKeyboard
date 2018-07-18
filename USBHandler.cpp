#include "USBHandler.h"
#include "Keyboard.h"

using namespace MiniKeyboard;

#if SOFTWARE_SERIAL_AVAILABLE
  #include <SoftwareSerial.h>
#endif

USBHandler::USBHandler(){

	Keyboard.begin();
}

USBHandler::~USBHandler() {
	Keyboard.stop();
}

void USBHandler::sendKeyCode(char * keyCode) {
    Keyboard.write(keyCode);
}
void USBHandler::sendLines(char *  keyCode) {
    Keyboard.print(keyCode); //
}
bool getUSBConnected(){
	return false; //wat
}