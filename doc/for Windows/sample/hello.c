/* @file   hello.c
 * @brief  CppUTestのお試しプロジェクト
 * @date   2017/08/24
 */
#include    <stdlib.h>
#include    <string.h>
#include    "hello.h"

#define HEADER  "Hello, "
#define TRAILER "!"
static char *greeting;

void Hello(const char *s)
{
    greeting = malloc(strlen(HEADER) + strlen(TRAILER) + strlen(s) + 1);
    strcpy(greeting, HEADER);
    strcat(greeting, s);
    strcat(greeting, TRAILER);
}

const char *Say(void)
{
    return greeting;
}

