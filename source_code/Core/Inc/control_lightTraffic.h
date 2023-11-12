/*
 * control_lightTraffic.h
 *
 *  Created on: Oct 28, 2023
 *      Author: ASUS TUF GAMING
 */

#ifndef INC_CONTROL_LIGHTTRAFFIC_H_
#define INC_CONTROL_LIGHTTRAFFIC_H_

#include "main.h"
#include "global.h"
#include "software_timer.h"
#include "displayLightTraffic.h"

#define RED1_GREEN2 1
#define RED1_YELLOW2 2
#define GREEN1_RED2 3
#define YELLOW1_RED2 4

extern int state_lightTraffic;

void control_lightTraffic();
void blink_red();
void blink_yellow();
void blink_green();

#endif /* INC_CONTROL_LIGHTTRAFFIC_H_ */
