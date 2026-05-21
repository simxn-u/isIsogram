#define UNITY_OUTPUT_COLOR

#include "isogram.h"
#include <string.h>
#include <stdio.h>


bool is_isogram(const char word[])
{
    if (word == NULL) {
        return false;
    }

    bool seen[256] = { false };

    for (size_t i = 0; word[i] != '\0'; i++) {
        unsigned char c = (unsigned char)word[i];

        if (c >= 'A' && c <= 'Z') {
            c = (unsigned char)(c + 32);
        }

        if (seen[c]) {
            return false;
        }

        seen[c] = true;
    }

    return true;
}
