/*
 * temperature.h
 *
 *  Created on: 16 mai 2024
 *      Author: vernelr
 */

#ifndef TEMPERATURE_H_
#define TEMPERATURE_H_

#include <stdio.h>
#include <stdint.h>

char* buffer;

extern void get_temp_and_humidity(uint32_t rh, int32_t temp);

#endif /* TEMPERATURE_H_ */
