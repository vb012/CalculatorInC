#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Please provide a string as a command-line argument.\n");
        return 1;
    }

    char *input_string = (char*)malloc(strlen(argv[1]) + 1);
    if (input_string == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    strcpy(input_string, argv[1]);
    printf("The entered string is: %s\n", input_string);
    free(input_string);
    return 0;
}