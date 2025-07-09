#include <stddef.h>
#include <stdio.h>

// Converts lowercase ASCII letters a–z in `str` to uppercase, in‑place.
void ascii_to_upper(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
    }
}
int main() {
    char msg[] = "Hello there";
    ascii_to_upper(msg);
    printf("%s\n", msg);  // Output: HELLO, SID!
    return 0;
}

