/*
 * temperature.c
 *
 *  Created on: 16 mai 2024
 *      Author: vernelr
 */

#include <stdint.h>
#include "temperature.h"
#include "sl_sensor_rht.h"

void decimal_to_hex(int decimal, char* buffer) {
    const char hex_chars[] = "0123456789ABCDEF";
    int i = 0;

    if (decimal == 0) {
        buffer[0] = '0';
        buffer[1] = '\0';
        return;
    }

    while (decimal > 0) {
        int remainder = decimal % 16;
        buffer[i++] = hex_chars[remainder];
        decimal /= 16;
    }

    buffer[i] = '\0';

    // Reverse the string
    int len = i;
    for (int j = 0; j < len / 2; j++) {
        temperature = buffer[j];
        buffer[j] = buffer[len - j - 1];
        buffer[len - j - 1] = temperature;
    }
}

void get_temp_and_humidity(uint32_t rh, int32_t temp)
{

}
