/* PhotoacousticMAX - ultrasonic cleaning driver */
#include <stdint.h>

void cleaning_burst(uint16_t amplitude)
{
    pwm_set_duty(amplitude);
    delay_ms(250);
    pwm_set_duty(0);
}
