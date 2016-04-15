#include "usb_keyboard.h"

void UsbKeyboardClass::begin()
{
    for ( int i = 0; i < c_bufferLength; ++i )
    {
        m_buffer[ i ] = 0;
    }

    Serial.write( "USB Keyboard started" );
}


UsbKeyboardClass UsbKeyboard;

