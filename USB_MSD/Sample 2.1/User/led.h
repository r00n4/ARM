/*******************************************************************************
 * @File: led.h
 * @Author: Milandr, L.
 * @Project: Sample 2.1
 * @Microcontroller: 1986VE92U
 * @Device: Evaluation Board For MCU 1986VE92U
 * @Date: 04.04.2017
 * @Purpose: Конфигурация линий ввода-вывода для работы со светодиодами
 *******************************************************************************/

#ifndef LED_H
#define LED_H

// Подключение заголовочных файлов модулей проекта
#include "link.h"

// Состояния системы
enum SYSTEM_STATES
{
  RED = 1,
  YELLOW,
  GREEN,
  BLUE
};

// Прототипы функций
void LED_Init(void);                     // Инициализация порта для работы со светодиодами
void LED_ImplementState(uint8_t state);  // Реализация состояний системы

#endif
