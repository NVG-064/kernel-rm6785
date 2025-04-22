/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __ASM_STACK_POINTER_H
#define __ASM_STACK_POINTER_H

/*
 * How to get the current stack pointer from C
 * Clang does not support global register variable for 'sp'
 * So we define it as an inline function
 */
static inline unsigned long get_current_sp(void)
{
    unsigned long sp;
    asm volatile("mov %0, sp" : "=r" (sp));
    return sp;
}

#endif /* __ASM_STACK_POINTER_H */
