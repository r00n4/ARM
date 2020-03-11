/*******************************************************************************
 * @File: main.h
 * @Author: Milandr, L.
 * @Project: Sample 2.1
 * @Microcontroller: 1986VE92U
 * @Device: Evaluation Board For MCU 1986VE92U
 * @Date: 04.04.2017
 * @Purpose: Главный модуль
 *******************************************************************************/

#ifndef MAIN_H
#define MAIN_H

// Подключение заголовочных файлов модулей проекта
#include "link.h"

// Макрос задержки
#define DELAY(VALUE) for (uint32_t i = SystemCoreClock / (4 * 1000) * (VALUE); \
                                   i != 0;                                     \
                                   i--)

#endif
