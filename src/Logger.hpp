#include <cstdio>
#pragma once
#define LOGGER(fmt,...) \
    printf("\e[32m(%s): \e[0m",__PRETTY_FUNCTION__); \
    printf(fmt,## __VA_ARGS__); \
    putchar('\n') 
