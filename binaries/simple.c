#include "stdio.h"
#include "stdlib.h"

int main() {
    char user_input[22];
    gets(user_input);
    if (strcmp("effective_python_angr", user_input) == 0) {
        printf("DONE!");
        exit(1);
    } else {
        printf("Nice try!");
        exit(0);
    }
}