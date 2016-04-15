#include "platform_defines.h"

//#include "usb_keyboard.h"

// constants won't change. They're used here to
// set pin numbers:
const int buttonPinOne = 2;     // the number of the pushbutton pin
const int buttonPinTwo = 4;     // the number of the pushbutton pin

                                // variables will change:
int buttonStateOne = 0;         // variable for reading the pushbutton status
int buttonStateTwo = 0;         // variable for reading the pushbutton status

const int ledPin = 13;      // the number of the LED pin

void setup()
{
    pinMode( ledPin, OUTPUT );

    // setup out monitor channel
    SERIAL_BEGIN( 9600 );
#error "For some reason this baud rate setting macro isn't working!!"
    //Serial.begin( 9600 );

    SERIAL_PRINT_LINE( "Started the app" );

    //UsbKeyboard.begin();

    // initialize the pushbutton pin as an input:
    pinMode( buttonPinOne, INPUT );
    pinMode( buttonPinTwo, INPUT );
}

void loop()
{
    // read the state of the pushbutton value:
    buttonStateOne = digitalRead( buttonPinOne );
    buttonStateTwo = digitalRead( buttonPinTwo );

    // check if the pushbutton is pressed.
    // if it is, the buttonState is HIGH:
    if ( buttonStateOne == HIGH )
    {
        TESTHIGH();
        //digitalWrite( ledPin, HIGH );
        //SERIAL_PRINT_LINE("Button One: Open");
    }
    else
    {
        TESTLOW();
        //digitalWrite( ledPin, LOW );
        //SERIAL_PRINT_LINE("Button One: Pressed");
        //Keyboard.write('A');

        /*buf[ 2 ] = 11;
        Serial.write( buf, 8 ); // write the key 'H'

        buf[ 0 ] = 0;
        buf[ 2 ] = 0;
        Serial.write( buf, 8 );  // Release key  

        buf[ 2 ] = 8;
        Serial.write( buf, 8 ); // write the key 'E'

        buf[ 0 ] = 0;
        buf[ 2 ] = 0;
        Serial.write( buf, 8 );  // Release key  

        buf[ 2 ] = 15;
        Serial.write( buf, 8 ); // write the key 'L'

        buf[ 0 ] = 0;
        buf[ 2 ] = 0;
        Serial.write( buf, 8 );  // Release key  

        buf[ 2 ] = 15;
        Serial.write( buf, 8 ); // write the key 'L'

        buf[ 0 ] = 0;
        buf[ 2 ] = 0;
        Serial.write( buf, 8 );  // Release key  

        buf[ 2 ] = 18;
        Serial.write( buf, 8 ); // write the key 'O'

        buf[ 0 ] = 0;
        buf[ 2 ] = 0;
        Serial.write( buf, 8 );  // Release key  */
    }

    if ( buttonStateTwo == HIGH )
    {
        //SERIAL_PRINT_LINE("Button Two: Open");
    }
    else
    {
        //SERIAL_PRINT_LINE("Button Two: Pressed");
        //Keyboard.write('B');
    }

    delay( 1000 );
}