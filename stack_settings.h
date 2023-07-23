#ifndef STACK_SETTINGS_H
#define STACK_SETTINGS_H

#include <stddef.h>

typedef double elem_t;
#define             elem_out        "%lf"

static elem_t       POISON          = 0xDEADF00D;
static const int    MIN_SIZE_DATA   = 4;


#endif