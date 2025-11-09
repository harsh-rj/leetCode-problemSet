#include <stdio.h>
#include <string.h>
#include <string.h>

int secondHighest(char* s) {
    int found = 0;
    int foundFound = 0;
    char ch1 = '+';
    char ch2 = '+';
    for (int i = 0; i < strlen(s); i++) {
        if ((s[i] >= '0') && (s[i] <= '9')) {
            found = 1;
            if (s[i] > ch1) {
                ch1 = s[i];
            }
        }
    }
    for (int i = 0; i < strlen(s); i++) {
        if ((s[i] >= '0') && (s[i] <= '9') && (s[i] < ch1)) {
            foundFound = 1;
            if (s[i] > ch2) {
                ch2 = s[i];
            }
        }
    }
    if (foundFound) {
        return (1 + ch2 - '1');
    }
    else {
        return -1;
    }
}