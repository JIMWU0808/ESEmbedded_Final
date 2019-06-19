#ifndef ASM_FUNC_H
#define ASM_FUNC_H

#include <stdint.h>

uint32_t read_ctrl(void); //return the value of control
void start_user(uint32_t *task_addr, uint32_t *psp_init); //start user task at task_addr in unprivileged mode and set sp to psp with value psp_init

#endif