#include "usb_keyboard.h"

// constants won't change. They're used here to
// set pin numbers:
const int buttonPinOne = 2;     // the number of the pushbutton pin
const int buttonPinTwo = 4;     // the number of the pushbutton pin

                                // variables will change:
int buttonStateOne = 0;         // variable for reading the pushbutton status
int buttonStateTwo = 0;         // variable for reading the pushbutton status

void setup()
{
    // setup out monitor channel
    Serial.begin( 9600 );

    UsbKeyboard.begin();

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
        //Serial.println("Button One: Open");
    }
    else
    {
        //Serial.println("Button One: Pressed");
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
        //Serial.println("Button Two: Open");
    }
    else
    {
        //Serial.println("Button Two: Pressed");
        //Keyboard.write('B');
    }

    delay( 1000 );
}