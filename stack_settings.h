#ifndef STACK_SETTINGS_H
#define STACK_SETTINGS_H

#include <cstdio>

const char* elem_out = "%lf";
elem_t       POISON        = 0xDEADF00;
const int    MIN_SIZE_DATA = 4;
const char*  log_file_name = "log_file.txt";
FILE*        log_stream    = nullptr;

#endif