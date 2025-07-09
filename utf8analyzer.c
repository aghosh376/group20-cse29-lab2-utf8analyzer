



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

void ascii_to_upper(char str[], char upper_string[]) {
    int i = 0;
    while(str[i] != "\0") {
        if (str[i] >= 'a' && str[i] <= 'z') {
            upper_string[i] = str[i] - 32;
        } else {
            upper_string[i] = str[i];
        }
    upper_string[i] = "\0";
    i++;
    }
}

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
    char valid[] = "true";
    if (is_ascii) {
        printf("Valid ASCII: true\n");
    } else {
        printf("Valid ASCII: false\n");
    }

    // implement the UTF-8 analyzer here
    //char string[] = argv;;
    
    char upper_string[100];
    //char dec_codepoints_results[];
    //char byte_codepoints_results[];
    //char emoji_results[];
    ascii_to_upper(str, upper_string);

    printf("Uppercased ASCII: %s\n", upper_string);
    printf("Length in bytes: %ld\n", strlen(str));
    //printf("Number of code points: %d\n", num_codepoints(string));
    //printf("Code points as decimal numbers: \n", dec_codepoints(string, dec_codepoints_results));
    //printf("Bytes per code point:", bytes_codepoints(string, byte_codepoints_results));
    //printf("Substring of the first 5 code points: %s\n", substring);
    //printf("Animal emojis: \n", emojis(string, emoji_results));
    //printf("Next character of Codepoint at index 3: %s\n", next_char(string));
    // Converts lowercase ASCII letters a–z in `str` to uppercase, in‑place.
}


