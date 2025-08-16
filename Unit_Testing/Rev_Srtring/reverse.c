#include "demo3.h"
#include <string.h>
char* reverse(char* str) {
    static char rev[100];   // static so it persists after function returns
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    return rev;
}