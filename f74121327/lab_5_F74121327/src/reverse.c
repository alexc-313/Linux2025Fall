#include "../include/reverse.h"
#include "string.h"
char *reverse(char *dest, const char *src)
{
    if (src == NULL || dest == NULL) {
        return NULL;
    }
    
    const char *end = src;
    char *p = dest;
    
    while (*end != '\0') {
        end++;
    }
    
    if (end > src) {
        end--;
        while (end >= src) {
            *p++ = *end--;
        }
    }
    
    *p = '\0';
    
    return dest;
}