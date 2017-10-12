/**
 * Irri2 Firmware
 * 
 * Copyright (C) 2014 Irri2Firmware [https://github.com/ghumphr1/Irri2]
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Configuration.h
 *
 * Basic settings such as:
 *
 * - Type of electronics
 * - Type of temperature sensor
 * - Type of pump
 * - Type of flow sensor
 * - LCD controller
 * - Extra features
 *
 *
 */

//#ifndef CONFIG_H
//#define CONFIG_H

/**
 *
 *  ***********************************
 *  **  ATTENTION TO ALL DEVELOPERS  **
 *  ***********************************
 *
 * You must increment this version number for every significant change such as,
 * but not limited to: ADD, DELETE RENAME OR REPURPOSE any directive/option.
 *
 * 
 */

#define CONFIGURATION_H_VERSION 000001


// debug output (enable/disable)
#define DEBUG_MODE
#ifdef DEBUG_MODE
  #define DEBUG_PRINT(x)  Console.print(x)
  #define DEBUG_PRINTLN(x)  Console.println(x)
#else
  #define DEBUG_PRINT(x)
  #define DEBUG_PRINTLN(x)
#endif

// outputs, digital PINs connected to the relays
#define OUT_1               2
#define OUT_2               3
#define OUT_3               4

// leds, digital PINs that directly drive the panel leds
#define LED_1               7
#define LED_2               6
#define LED_3               5

// switches, analog PINs that read the 3-way panel switches
#define SWITCH_1            0
#define SWITCH_2            1
#define SWITCH_3            2

// rain sensor, digital PIN connected to the rain sensor
// (basically a 2-way switch, normally closed)
#define RAIN_SENSOR         8

// constants for switch positions
#define SWITCH_OFF          0
#define SWITCH_AUTO         1
#define SWITCH_ON           2

// constants for rain sensor status
#define NO_RAIN             0
#define RAIN                1

