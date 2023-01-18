// #include <iostream>
#include <stdio.h>
#include "calc.h"

/**
 * @fn int add(int x, int y)
 * @brief add function
 * @param[in] x(int 1) int 1
 * @param[in] y(int 2) int 2
 * @return in add result
*/
int add(int x, int y)
{
    return x + y;
}

/**
 * @fn int sub(int x, int y)
 * @brief sub function
 * @param[in] x(int 1) int 1
 * @param[in] y(int 2) int 2
 * @return in sub function
*/
int sub(int x, int y)
{
    return x - y;
}

/**
* @fn void show(int x, int y)
* @brief output calculate result
* @param[in] x(number1) number1
* @param[in] y(number) number2
*/
void show(int x, int y)
{
    printf("x,y ---\n");
    printf(" add > %d\n", add(x, y));
    printf(" sub > %d\n", sub(x, y));
}