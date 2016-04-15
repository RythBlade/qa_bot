#include "platform_defines.h"
#include "usb_keyboard.h"

int main()
{
    SERIAL_BEGIN( 9600 );

    SERIAL_PRINT_LINE( "Starting application" );

    UsbKeyboard.begin();
    UsbKeyboard.press( 't' );
    UsbKeyboard.end();

    SERIAL_END();
    return 0;
}