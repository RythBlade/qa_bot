#include "usb_keyboard.h"

//////////////////////////////////////////////////////////////////////////
// Globals
//////////////////////////////////////////////////////////////////////////
UsbKeyboardClass UsbKeyboard;

//////////////////////////////////////////////////////////////////////////

void UsbKeyboardClass::begin()
{
    for ( int i = 0; i < c_bufferLength; ++i )
    {
        m_buffer[ i ] = 0;
    }

    SERIAL_PRINT_LINE( "USB Keyboard started" );
}

void UsbKeyboardClass::end()
{
    SERIAL_PRINT_LINE( "USB Keyboard end" );
}

void UsbKeyboardClass::press( char keyToPress )
{
    SERIAL_PRINT_LINE( "USB Keyboard press" );
}

int UsbKeyboardClass::print( char charaterToPrint )
{
    SERIAL_PRINT_LINE( "USB Keyboard print, char\n" );
    return 0;
}

int UsbKeyboardClass::print( int charaterToPrint )
{
    SERIAL_PRINT_LINE( "USB Keyboard print, int" );
    return 0;
}

int UsbKeyboardClass::print( char * stringToPrint )
{
    SERIAL_PRINT_LINE( "USB Keyboard print, char*" );
    return 0;
}

int UsbKeyboardClass::println( char charaterToPrint )
{
    SERIAL_PRINT_LINE( "USB Keyboard println, char" );
    return 0;
}

int UsbKeyboardClass::println( int charaterToPrint )
{
    SERIAL_PRINT_LINE( "USB Keyboard println, int" );
    return 0;
}

int UsbKeyboardClass::println( char * stringToPrint )
{
    SERIAL_PRINT_LINE( "USB Keyboard println, char*" );
    return 0;
}

int UsbKeyboardClass::release( char keyToRelease )
{
    SERIAL_PRINT_LINE( "USB Keyboard release, char" );
    return 0;
}

int UsbKeyboardClass::releaseAll()
{
    SERIAL_PRINT_LINE( "USB Keyboard releaseAll" );
    return 0;
}

int UsbKeyboardClass::write( char charToWrite )
{
    SERIAL_PRINT_LINE( "USB Keyboard write, char" );
    return 0;
}

