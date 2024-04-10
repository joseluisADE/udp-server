//********************//
//    ___   ___  ____ //
//   / _ | / _ \/ __/ //
//  / __ |/ // / _/   //
// /_/ |_/____/___/   //
//********************//
//!
//! \file: server-udp.c
//! \brief: UPD server sample
//! \author: Jose Luis Unibaso

/********************** Include Files **************************/
#include <pigpio.h>

/********************* Type Definitions ************************/
/******************* Constant Definitions **********************/
#define LED 21

/*********** Macros (Inline Functions) Definitions *************/
/******************* Variable Definitions **********************/
/******************** Function Prototypes **********************/

int blink(double time);
void configGPIO();