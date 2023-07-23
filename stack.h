#ifndef STACK_H
#define STACK_H

#include <stdio.h>
#include "stack_settings.h"

#define DUMPLING
#define StackCtor(stk, size) Stack_Ctor((stk), (size), #stk, __FILE__, __PRETTY_FUNCTION__, __LINE__)

#ifdef DUMPLING

    #define StackDump(stk, err) Stack_Dump((stk), (err), __FILE__, __PRETTY_FUNCTION__, __LINE__)

#endif

#ifdef DUMPLING

    extern const unsigned long long Canary;

#endif

typedef enum _Poisons {
    POISON_SIZE     = -1,
    POISON_CAPACITY = -1,
    POISON_DATA     = -1,
    POISON_NAME     =  0,
    POISON_LINE     = -1,
    POISON_HASH     = -1,
    POISON_CANARY   = -1,
} Poisons;

typedef enum errors {
    STACK_OK            = 1 << 0,
    STACK_NULLPTR       = 1 << 1,
    STACK_NULLPTR_DATA  = 1 << 2,
    INVALID_SIZE        = 1 << 3,
    INVALID_CAPACITY    = 1 << 4,
    STACK_EMPTY         = 1 << 5,
    HAS_NOT_MEMORY      = 1 << 6,
    INVALID_DATA        = 1 << 7,
    STACK_IS_ATACKED    = 1 << 8,
} errors;

typedef enum _Conditions {
    STACK_UP   = 1,
    STACK_DOWN = 0,
} Conditions;

#ifdef DUMPLING

    typedef struct 
    {
        const char* name;
        const char* func;
        const char* file;
        int         line;
    } stk_info;

#endif

typedef struct 
{
    #ifdef DUMPLING

        unsigned canary;

    #endif

    elem_t* data;
    size_t  size;
    size_t  capacity;

    #ifdef DUMPLING

        stk_info           info;
        unsigned long long hash;

    #endif
} stack;

unsigned StackPush (stack* stk, elem_t x);
unsigned StackPop (stack* stk, elem_t* x);
unsigned Stack_Ctor (stack** stk, size_t n, const char* name_stk, const char* name_of_file, const char* name_of_func, int line);
unsigned StackDtor (stack* stk);
unsigned StackVerify (stack* stk);
unsigned StackResize (stack* stk, const int condition);
void Stack_Dump (stack* stk, const unsigned err, const char* name_wrong_file, const char* name_wrong_func, int line);
unsigned long long Stack_hash_FAQ6 (const stack* stk);
unsigned Printf_stk (stack* stk);

#endif