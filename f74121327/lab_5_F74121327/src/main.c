#include <stdio.h>
#include <stdlib.h>
#include "../include/reverse.h"
int main()
{
    const char *src = "F74121327";
    char *dst = malloc(10);
    dst = reverse(dst, src);
    printf("%s\n", dst);
    return 0;
}