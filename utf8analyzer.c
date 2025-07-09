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

    // implement the UTF-8 analyzer here
    char string[100]
    fgets(string, 100, stdin);

    printf("Valid ASCII: %s\n", valid);
    printf("Uppercased ASCII: %s\n", upper);
    printf("Length in bytes: %d\n", strlen(string));
    printf("Number of code points: %d\n", num_codepoints);
    printf("Code points as decimal numbers: \n", dec_codepoints);
    printf("Bytes per code point:", bytes_codepoints);
    printf("Substring of the first 5 code points: %s\n", substring);
    printf("Animal emojis: \n", emojis);
    printf("Next character of Codepoint at index 3: %s\n", next_char);
}
