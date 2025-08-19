/*
 * freertos_priority_queue.h
 *
 *  Created on: Aug 18, 2025
 *      Author: Eze
 */

#ifndef FREERTOS_PRIORITY_QUEUE_H
#define FREERTOS_PRIORITY_QUEUE_H

#include "priority_queue_core.h"
#include "FreeRTOS.h"
#include "semphr.h"

typedef struct freertos_pq_opaque* PriorityQueueHandle_t;

// API de FreeRTOS
PriorityQueueHandle_t xPriorityQueueCreate(size_t capacity, size_t item_size);
void vPriorityQueueDelete(PriorityQueueHandle_t handle);
BaseType_t xPriorityQueueSend(PriorityQueueHandle_t handle, void * const *ppItem, TickType_t ticksToWait);
BaseType_t xPriorityQueueReceive(PriorityQueueHandle_t handle, void **ppItem, TickType_t ticksToWait);

#endif
