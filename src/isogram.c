#define UNITY_OUTPUT_COLOR

#include "isogram.h"
#include <string.h>
#include <stdio.h>


bool seen[256] = {false};

bool is_isogram(const char word[]){
  if (word == NULL) {
    return true; // Consider NULL as an isogram
  }

  for (size_t i = 0; word[i] != '\0'; i++) {
    char c = word[i];
    if (c >= 'A' && c <= 'Z') {
      c += 32; // Convert to lowercase
    }
    if (seen[(unsigned char)c]) {
      return false; // Character has been seen before
    }
    seen[(unsigned char)c] = true; // Mark character as seen
  }
  return true; // All characters are unique
}
