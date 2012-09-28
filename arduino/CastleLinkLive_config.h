/*****************************************************************************
 *  CastleLinkLive Library for Arduino - CastleLinkLive_config.h
 *  Copyright (C) 2012  Matteo Piscitelli
 *  E-mail: matteo@picciux.it
 * 
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  For further info, check http://code.google.com/p/castlelinklive4arduino/
 *
 ******************************************************************************/
 
/******************************************************************************
 * CastleLinkLive library for arduino - Global library config 
 ******************************************************************************/

#ifndef CastleLinkLive_config_h
#define CastleLinkLive_config_h

/*
 * CastleLinkLive library will use arduino led (pin 13) to signal 
 * throttle level and failure to the user.
 * When armed, with valid throttle signal, it will blink the led 
 * at increasing speed depending on throttle level (wheather it is 
 * software generated or exernal): at idle throttle it will blink 
 * at ~0.5Hz, at full throttle it will glow steady.
 * If throttle signal become invalid, the led will signal a 
 * repeating pattern: three blinks - pause.
 * Uncomment following LED_DISABLE define to disable all led 
 * operations and free the relative pin for other uses.
 * Keep in mind that CastleLinkLive provide a public function 
 *  setLed(uint8_t on)
 * that will turn on or off the led, working only when CastleLinkLive
 * is not armed.
 * Disabling the led also shrinks code by a few bytes
 */
//#define LED_DISABLE     1

/*
 * By default, CastleLinkLive will be enabled to control to up to 2 ESCs
 * if compiled for ATmega168, ATmega328, ATmega1280 or ATmega2560; or 
 * up to 1 if compiled for ATmega8.
 * Uncommenting following define you can override it.
 * Anyway keep in mind that code will not manage more than 2 ESCs
 */
//#define MAX_ESCS        2

/*
 * By default, when generating throttle, CastleLinkLive will keep
 * a period of 20ms (50Hz frequency).
 * Uncommenting the following define you can override period duration
 */
//#define THROTTLEGEN_PERIOD 0.02f //20ms throttle period

/*
 * By default, CastleLinkLive will use a lower limit of 1 ms
 * and an upper limit of 2 ms when generating throttle or measuring
 * external throttle. CastleLinkLive provides one version of begin 
 * function to explicitly set throttle bounds, expressed in 
 * microseconds.
 * Here you can ovverride the default bounds (are expressed
 * in seconds)
 */
//#define THROTTLE_MIN 0.001f   // 1ms min
//#define THROTTLE_MAX 0.002f   // 2ms max

#endif //def CastleLinkLive_config_h