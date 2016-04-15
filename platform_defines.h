// Platform.h

#ifndef _PLATFORM_h
#define _PLATFORM_h

//////////////////////////////////////////////////////////////////////////
// PLATFORM CHOICE
//////////////////////////////////////////////////////////////////////////

#define PLATFORM_ARDUINO // The arduino visual studio plugin seems to be struggling with project defines, so define it here manually
//#define PLATFORM_WINDOWS // The windows platform is define in it's project settings.

#ifdef PLATFORM_WINDOWS
// turn arduino off if we're in windows - the arduino visual studio plugin seems to be struggling with project defines.
#undef PLATFORM_ARDUINO
#endif

//////////////////////////////////////////////////////////////////////////
// PLATFORM INCLUDES
//////////////////////////////////////////////////////////////////////////

#ifdef PLATFORM_ARDUINO

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#elif defined PLATFORM_WINDOWS

#include <stdio.h>
#include <stdint.h>

#else

#error "Unsupported platform defined - could setup the platform includes"

#endif

//////////////////////////////////////////////////////////////////////////
// FUNCTION RE-MAPPING
//////////////////////////////////////////////////////////////////////////
#ifdef PLATFORM_ARDUINO
#define SERIAL_BEGIN( baud )            Serial.begin( baud )
#define SERIAL_PRINT_LINE( string )     Serial.println( string )
#define SERIAL_END()                    Serial.end()
#define TESTHIGH()                        digitalWrite( ledPin, HIGH )
#define TESTLOW()                         digitalWrite( ledPin, LOW )
#elif defined PLATFORM_WINDOWS
#define SERIAL_BEGIN( baud )            printf( "Serial begin: %d", baud );
#define SERIAL_PRINT_LINE( string )     printf( "printf%s\n", string )
#define SERIAL_END()
#else
#error "Unsupported platform defined - could not remap platform functions"
#endif

#endif

