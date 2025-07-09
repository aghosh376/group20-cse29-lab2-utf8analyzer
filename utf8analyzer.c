



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
    char string[100]
    fgets(string, 100, stdin);
    
    char[] dec_codepoints_results;
    char[] byte_codepoints_results;
    char[] emoji_results;

    printf("Valid ASCII: %s\n", valid(string));
    printf("Uppercased ASCII: %s\n", upper(string));
    printf("Length in bytes: %d\n", strlen(string));
    //printf("Number of code points: %d\n", num_codepoints(string));
    //printf("Code points as decimal numbers: \n", dec_codepoints(string, dec_codepoints_results));
    //printf("Bytes per code point:", bytes_codepoints(string, byte_codepoints_results));
    //printf("Substring of the first 5 code points: %s\n", substring);
    //printf("Animal emojis: \n", emojis(string, emoji_results));
    //printf("Next character of Codepoint at index 3: %s\n", next_char(string));
    // Converts lowercase ASCII letters a–z in `str` to uppercase, in‑place.
void ascii_to_upper(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}
}
