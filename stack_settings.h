#ifndef STACK_SETTINGS_H
#define STACK_SETTINGS_H

#include <stddef.h>

typedef double elem_t;
#define             elem_out        "%lf"

static elem_t       POISON          = 0xDEADF00D;
static const int    MIN_SIZE_DATA   = 4;
static const char*  log_file_name   = "log_file.txt";
static FILE*        log_stream      = nullptr;


#endif