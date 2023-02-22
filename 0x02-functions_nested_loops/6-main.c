#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);

    r = _abs(0);
    printf("%d\n", r);

    r = _abs(1);
    printf("%d\n", r);

    r = _abs(-98);
    printf("%d\n", r);

    r = _abs(INT_MAX);
    printf("%d\n", r);

    r = _abs(INT_MIN);
    printf("%d\n", r);

    r = _abs(12);
    printf("%d\n", r);

    r = _abs(0x0F02);
    printf("%d\n", r);

    return (0);
}
