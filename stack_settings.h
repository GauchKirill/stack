#ifndef STACK_SETTINGS_H
#define STACK_SETTINGS_H

#include <stddef.h>

typedef             char*           elem_t;
#define             elem_out        "%p"

static elem_t       POISON          = nullptr;
static const int    MIN_SIZE_DATA   = 4;


#endif