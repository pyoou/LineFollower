//
// Created by pyoou on 11.03.2026.
//

#ifndef STM32_PROJEKT_GPIO_H
#define STM32_PROJEKT_GPIO_H

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

    void LED_Init(void);
    void external_led_init(uint16_t GPIO_PIN_X);

#ifdef __cplusplus
}
#endif

#endif //STM32_PROJEKT_GPIO_H