/*
 *  Open HR20
 *
 *  target:     ATmega169 @ 4 MHz in Honnywell Rondostat HR20E
 *
 *  compiler:    WinAVR-20071221
 *              avr-libc 1.6.0
 *              GCC 4.2.2
 *
 *  copyright:  2008 Juergen Sachs (juergen-sachs-at-gmx-dot-de)
 *				2008 Jiri Dobry (jdobry-at-centrum-dot-cz)
 *
 *  license:    This program is free software; you can redistribute it and/or
 *              modify it under the terms of the GNU Library General Public
 *              License as published by the Free Software Foundation; either
 *              version 2 of the License, or (at your option) any later version.
 *
 *              This program is distributed in the hope that it will be useful,
 *              but WITHOUT ANY WARRANTY; without even the implied warranty of
 *              MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *              GNU General Public License for more details.
 *
 *              You should have received a copy of the GNU General Public License
 *              along with this program. If not, see http:*www.gnu.org/licenses
 */

/*!
 * \file       config.h
 * \brief      This headerfile only contains information about the configuration of the HR20E and its functionality
 * \author     Juergen Sachs (juergen-sachs-at-gmx-dot-de) Jiri Dobry <jdobry-at-centrum-dot-cz>
 * \date       $Date$
 * $Rev$
 */

/*
In this file we define only configuration parameters, for example what kind of control port we have.
*/

#ifndef CONFIG_H
#define CONFIG_H

// AVR LibC includes 
#include <stdint.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <avr/sleep.h>
#include <avr/version.h>


#define LANG_uni 1
#define LANG_de 2
#define LANG_cs 3
//! language
#define LANG LANG_uni
//#define LANG LANG_de
//#define LANG LANG_cs

// our Version
#define REVHIGH  0  //! Revision number high
#define REVLOW   21 //! Revision number low
#define SVNREV   1	//! Subversion Revision, aka build number
#define VERSION_N 0xF021 //! Version as HEX value F0.80 (F as free)  
#define VERSION_STRING  "V: OpenHR20 SW version 0.21 build " __DATE__ " " __TIME__

// Parameters for the COMM-Port
#define COM_BAUD_RATE 9600
// Note we should only enable of of the following at one time
/* we support RS232 */
#define COM_RS232 1
/* we support RS485 */
/* #define COM_RS485  */
/* Our default Adress, if not set or invalid */
/* #define COM_DEF_ADR 1 */

#define DEFAULT_TEMPERATURE 2000 


// Some default Values
#define BOOT_DD         1  //!< Boot-Up date: day
#define BOOT_MM        10  //!< Boot-Up date: month
#define BOOT_YY         8  //!< Boot-Up date: year
#define BOOT_hh        12  //!< Boot-Up time: hour
#define BOOT_mm        00  //!< Boot-Up time: minutes




#endif /* CONFIG_H */