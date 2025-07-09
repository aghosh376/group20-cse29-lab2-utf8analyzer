#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: utf8analyzer \"<UTF-8 encoded string>\"\n");
        return 1;
    }

    int is_ascii = 1;  // Assume valid until proven otherwise
    const char *str = argv[1];

    while (*str) {
        if ((unsigned char)*str > 127) {
            is_ascii = 0;
            break;
        }
        str++;
    }

    // implement the UTF-8 analyzer here
}
