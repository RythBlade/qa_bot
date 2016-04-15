// buttonSender.h

#ifndef _BUTTONSENDER_h
#define _BUTTONSENDER_h

#include "platform_defines.h"

#ifdef PLATFORM_ARDUINO

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

#endif

//! @brief      Sends keystrokes to an attached computer;
//! @remarks    THIS IS A 1 TO 1 IMPLEMENTATION OF THE ARDUINO KEYBOARD LIBRARY FOR ARDUINO UNO R3 WHICH HAVE HAD THEIR BOOT LOADER ALTERED TO APPEAR AS USB DEVICE
//              A COMPLETE IMPLEMENTATION OF THE KEYBOARD SPEC FOR USB WILL COME LATER. Library doc is ripped straight from the arduino docs: https://www.arduino.cc/en/Reference/MouseKeyboard
//!             Note: Not every possible ASCII character, particularly the non-printing ones, can be sent with the Keyboard library.
//!             The library supports the use of modifier keys. Modifier keys change the behavior of another key when pressed simultaneously.
//!             See here (https://www.arduino.cc/en/Reference/KeyboardModifiers) for additional information on supported keys and their use. 
class UsbKeyboardClass
{
public:
    //! @brief      Starts emulating a keyboard connected to a computer. To end control, use Keyboard.end().
    //! @param[in]  None
    //! @returns    None
    void begin();

    //! @brief      Starts emulating a keyboard connected to a computer. To end control, use Keyboard.end().
    //! @param[in]  None
    //! @returns    None
    void end();

    //! @brief      When called, Keyboard.press() functions as if a key were pressed and held on your keyboard. Useful when using modifier keys. To end the key press, use Keyboard.release() or Keyboard.releaseAll().
    //! @remarks    It is necessary to call Keyboard.begin() before using press(). 
    //! @param[in]  The key to press
    //! @returns    None
    void press( char keyToPress );

    //! @brief      Sends a keystroke to a connected computer.
    //! @param[in]  A char to be sent to the computer as a keystroke
    //! @remarks    Keyboard.print() must be called after initiating Keyboard.begin(). 
    //!             WARNING: When you use the Keyboard.print() command, the Arduino takes over your keyboard!
    //!             Make sure you have control before you use the command. A pushbutton to toggle the keyboard control state is effective.
    //! @retruns    Number of bytes sent
    int print( char charaterToPrint );

    //! @brief      Sends a keystroke to a connected computer.
    //! @param[in]  A int to be sent to the computer as a keystroke
    //! @remarks    Keyboard.print() must be called after initiating Keyboard.begin(). 
    //!             WARNING: When you use the Keyboard.print() command, the Arduino takes over your keyboard!
    //!             Make sure you have control before you use the command. A pushbutton to toggle the keyboard control state is effective.
    //! @retruns    Number of bytes sent
    int print( int charaterToPrint );

    //! @brief      Sends a keystroke/s to a connected computer.
    //! @param[in]  a string to be sent to the computer as a keystroke/s
    //! @remarks    Keyboard.print() must be called after initiating Keyboard.begin(). 
    //!             WARNING: When you use the Keyboard.print() command, the Arduino takes over your keyboard!
    //!             Make sure you have control before you use the command. A pushbutton to toggle the keyboard control state is effective.
    //! @returns    Number of bytes sent
    int print( char* stringToPrint );

    //! @brief      Sends a keystroke to a connected computer, followed by a newline and carriage return.
    //! @param[in]  A char to be sent to the computer as a keystroke, followed by newline and carriage return
    //! @remarks    Keyboard.print() must be called after initiating Keyboard.begin(). 
    //!             WARNING: When you use the Keyboard.print() command, the Arduino takes over your keyboard!
    //!             Make sure you have control before you use the command. A pushbutton to toggle the keyboard control state is effective.
    //! @returns    Number of bytes sent
    int println( char charaterToPrint );

    //! @brief      Sends a keystroke to a connected computer, followed by a newline and carriage return.
    //! @param[in]  An int to be sent to the computer as a keystroke, followed by newline and carriage return
    //! @remarks    Keyboard.print() must be called after initiating Keyboard.begin(). 
    //!             WARNING: When you use the Keyboard.print() command, the Arduino takes over your keyboard!
    //!             Make sure you have control before you use the command. A pushbutton to toggle the keyboard control state is effective.
    //! @retruns    Number of bytes sent
    int println( int charaterToPrint );

    //! @brief      Sends a keystroke/s to a connected computer, followed by a newline and carriage return.
    //! @param[in]  a string to be sent to the computer as a keystroke/s
    //! @remarks    Keyboard.print() must be called after initiating Keyboard.begin(). 
    //!             WARNING: When you use the Keyboard.print() command, the Arduino takes over your keyboard!
    //!             Make sure you have control before you use the command. A pushbutton to toggle the keyboard control state is effective.
    //! @retruns    Number of bytes sent
    int println( char* stringToPrint );

    //! @brief      Lets go of the specified key. See Keyboard.press() for more information.
    //! @param[in]  The key to release.
    //! @returns    The number of keys released
    int release( char keyToRelease );

    //! @brief      Lets go of all keys currently pressed. See Keyboard.press() for additional information.
    //! @param[in]  None
    //! @returns    The number of keys released.
    int releaseAll();

    //! @brief      Sends a keystroke to a connected computer. This is similar to pressing and releasing a key on your keyboard. 
    //!             You can send some ASCII characters or the additional keyboard modifiers and special keys. 
    //! @param[in]  A char or int to be sent to the computer. Can be sent in any notation that's acceptable for a char.
    //! @returns    Number of bytes sent
    //! @remarks    You can send some ASCII characters or the additional keyboard modifiers and special keys.
    //!             Only ASCII characters that are on the keyboard are supported. For example, ASCII 8 ( backspace ) would work, but 
    //!             ASCII 25 ( Substitution )would not.When sending capital letters, Keyboard.write() sends a shift command plus the desired
    //!             character, just as if typing on a keyboard.If sending a numeric type, it sends it as an ASCII character ( ex.Keyboard.write( 97 ) 
    //!             will send 'a' ).
    //! 
    //!             For a complete list of ASCII characters, see ASCIITable.com.
    //! 
    //!             WARNING: When you use the Keyboard.write() command, the Arduino takes over your keyboard!Make sure you have control before 
    //!             you use the command.A pushbutton to toggle the keyboard control state is effective.
    int write( char charToWrite );

private:
    static int const c_bufferLength = 8;

    uint8_t m_buffer[ c_bufferLength ];
};

extern UsbKeyboardClass UsbKeyboard;

#endif

