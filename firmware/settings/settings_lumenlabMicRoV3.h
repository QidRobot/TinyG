/*
 * settings_zen7x12.h - LumenLabs MicRo V3 machine profile
 * Part of TinyG project
 *
 * Copyright (c) 2011 - 2012 Alden S. Hart Jr.
 *
 * TinyG is free software: you can redistribute it and/or modify it 
 * under the terms of the GNU General Public License as published by 
 * the Free Software Foundation, either version 3 of the License, 
 * or (at your option) any later version.
 *
 * TinyG is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. 
 * See the GNU General Public License for details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with TinyG  If not, see <http://www.gnu.org/licenses/>.
 */
/* Note: The values in this file are the default settings that are loaded
 * 		 into a virgin EEPROM, and can be changed using the config commands.
 *		 After initial load the EEPROM values (or changed values) are used.
 *
 *		 System and hardware settings that you shouldn't need to change 
 *		 are in system.h  Application settings that also shouldn't need 
 *		 to be changed are in tinyg.h
 */

/***********************************************************************/
/**** Lumenlabs micRo v3 profile ***************************************/
/***********************************************************************/

#define TINYG_CONFIGURATION_PROFILE "Lumenlabs micRo v3" // displays base config profile
#define INIT_CONFIGURATION_MESSAGE "\n#### Initializing configs to Lumenlabs profile ####\n"

// **** common settings - applied to all axes or motors ****

#define JERK_MAX 			50000000	// yes, that's "50,000,000" mm/(min^3)
#define JUNCTION_DEVIATION	0.05		// default value, in mm

// **** system settings ****

#define JUNCTION_ACCELERATION 200000	// centripetal acceleration around corners

#define STATUS_REPORT_INTERVAL_MS	0	// in milliseconds - 0=off

#define GCODE_DEFAULT_PLANE			CANON_PLANE_XY
#define GCODE_DEFAULT_UNITS			MILLIMETERS
#define GCODE_DEFAULT_COORD_SYSTEM	G54
#define GCODE_DEFAULT_PATH_CONTROL 	PATH_CONTINUOUS
#define GCODE_DEFAULT_DISTANCE_MODE ABSOLUTE_MODE

#define COM_APPEND_TX_CR			FALSE
#define COM_IGNORE_RX_CR			FALSE
#define COM_IGNORE_RX_LF			FALSE
#define COM_ENABLE_ECHO				TRUE
#define COM_ENABLE_XON				TRUE

#define ENABLE_ACCELERATION 1			// *** NOTE: this feature is disabled in 338.11 - always equal to 1 

// *** motor settings ***

#define M1_MOTOR_MAP X					// 1ma
#define M1_STEP_ANGLE 1.8				// 1sa
#define M1_TRAVEL_PER_REV 2.54			// 1tr
#define M1_MICROSTEPS 8					// 1mi		1,2,4,8
#define M1_POLARITY 0					// 1po		0=normal, 1=reversed
#define M1_POWER_MODE 1					// 1pm		TRUE=low power idle enabled 

#define M2_MOTOR_MAP Y
#define M2_STEP_ANGLE 1.8
#define M2_TRAVEL_PER_REV 2.54
#define M2_MICROSTEPS 8
#define M2_POLARITY 1
#define M2_POWER_MODE 1

#define M3_MOTOR_MAP Y					// dual Y gantry
#define M3_STEP_ANGLE 1.8
#define M3_TRAVEL_PER_REV 2.54
#define M3_MICROSTEPS 8
#define M3_POLARITY 1
#define M3_POWER_MODE 1

#define M4_MOTOR_MAP Z
#define M4_STEP_ANGLE 1.8
#define M4_TRAVEL_PER_REV 2.54
#define M4_MICROSTEPS 8
#define M4_POLARITY 0
#define M4_POWER_MODE 1

// *** axis settings ***

#define X_AXIS_MODE AXIS_STANDARD		// xam		see canonical_machine.h cmAxisMode for valid values
#define X_VELOCITY_MAX 1600 			// xvm		G0 max velocity in mm/min
#define X_FEEDRATE_MAX X_VELOCITY_MAX	// xfr 		G1 max feed rate in mm/min
#define X_TRAVEL_MAX 400				// travel between switches or crashes
#define X_JERK_MAX JERK_MAX				// xjm
#define X_JUNCTION_DEVIATION JUNCTION_DEVIATION		// xjd
#define X_SWITCH_MODE 1					// 1=switches enabled for homing only
#define X_SEARCH_VELOCITY -1000			// move in negative direction
#define X_LATCH_VELOCITY 100			// mm/min
#define X_LATCH_BACKOFF 2				// mm
#define X_ZERO_BACKOFF 1				// mm

#define Y_AXIS_MODE AXIS_STANDARD
#define Y_VELOCITY_MAX 1600
#define Y_FEEDRATE_MAX Y_VELOCITY_MAX
#define Y_TRAVEL_MAX 300
#define Y_JERK_MAX JERK_MAX
#define Y_JUNCTION_DEVIATION JUNCTION_DEVIATION
#define Y_SWITCH_MODE 1
#define Y_SEARCH_VELOCITY -1000
#define Y_LATCH_VELOCITY 100
#define Y_LATCH_BACKOFF 2
#define Y_ZERO_BACKOFF 1

#define Z_AXIS_MODE AXIS_STANDARD
#define Z_VELOCITY_MAX 1600
#define Z_FEEDRATE_MAX Z_VELOCITY_MAX
#define Z_TRAVEL_MAX 75
#define Z_JERK_MAX JERK_MAX
#define Z_JUNCTION_DEVIATION JUNCTION_DEVIATION
#define Z_SWITCH_MODE 1
#define Z_SEARCH_VELOCITY -1000
#define Z_LATCH_VELOCITY 100
#define Z_LATCH_BACKOFF 2
#define Z_ZERO_BACKOFF 1

#define A_AXIS_MODE AXIS_DISABLED
#define A_VELOCITY_MAX 3600
#define A_FEEDRATE_MAX A_VELOCITY_MAX
#define A_TRAVEL_MAX -1
#define A_JERK_MAX JERK_MAX
#define A_JUNCTION_DEVIATION JUNCTION_DEVIATION
#define A_RADIUS 1
#define A_SWITCH_MODE 1
#define A_SEARCH_VELOCITY -600
#define A_LATCH_VELOCITY 100
#define A_LATCH_BACKOFF -5
#define A_ZERO_BACKOFF 2

#define B_AXIS_MODE AXIS_DISABLED
#define B_VELOCITY_MAX 3600
#define B_FEEDRATE_MAX B_VELOCITY_MAX
#define B_TRAVEL_MAX -1
#define B_JERK_MAX JERK_MAX
#define B_JUNCTION_DEVIATION JUNCTION_DEVIATION
#define B_RADIUS 1
#define B_SWITCH_MODE 1
#define B_SEARCH_VELOCITY -600
#define B_LATCH_VELOCITY 100
#define B_LATCH_BACKOFF -5
#define B_ZERO_BACKOFF 2

#define C_AXIS_MODE AXIS_DISABLED
#define C_VELOCITY_MAX 3600
#define C_FEEDRATE_MAX C_VELOCITY_MAX
#define C_TRAVEL_MAX -1
#define C_JERK_MAX JERK_MAX
#define C_JUNCTION_DEVIATION JUNCTION_DEVIATION
#define C_RADIUS 1
#define C_SWITCH_MODE 1
#define C_SEARCH_VELOCITY -600
#define C_LATCH_VELOCITY 100
#define C_LATCH_BACKOFF -5
#define C_ZERO_BACKOFF 2

// *** DEFAULT COORDINATE SYSTEM OFFSETS ***

#define G54_X_OFFSET 0			// G54 is traditionally set to all zeros
#define G54_Y_OFFSET 0
#define G54_Z_OFFSET 0
#define G54_A_OFFSET 0
#define G54_B_OFFSET 0
#define G54_C_OFFSET 0

#define G55_X_OFFSET 0			// but the again, so is everyting else (at least for start)
#define G55_Y_OFFSET 0
#define G55_Z_OFFSET 0
#define G55_A_OFFSET 0
#define G55_B_OFFSET 0
#define G55_C_OFFSET 0

#define G56_X_OFFSET 0
#define G56_Y_OFFSET 0
#define G56_Z_OFFSET 0
#define G56_A_OFFSET 0
#define G56_B_OFFSET 0
#define G56_C_OFFSET 0

#define G57_X_OFFSET 0
#define G57_Y_OFFSET 0
#define G57_Z_OFFSET 0
#define G57_A_OFFSET 0
#define G57_B_OFFSET 0
#define G57_C_OFFSET 0

#define G58_X_OFFSET 0
#define G58_Y_OFFSET 0
#define G58_Z_OFFSET 0
#define G58_A_OFFSET 0
#define G58_B_OFFSET 0
#define G58_C_OFFSET 0

#define G59_X_OFFSET 0
#define G59_Y_OFFSET 0
#define G59_Z_OFFSET 0
#define G59_A_OFFSET 0
#define G59_B_OFFSET 0
#define G59_C_OFFSET 0

