#include <stdio.h>

int main(const char *str) {
	int is_valid_ascii;
	while(*str) {
		if ((unsigned char)*str > 127)
			is_valid_ascii = 0;
		str++;
	}
	is_valid_ascii = 1;
	
	return 0;
}



