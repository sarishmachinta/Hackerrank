#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];   // buffer to hold the input sentence
    // Read the entire line including spaces
    fgets(str, sizeof(str), stdin);

    // Split the string into tokens separated by space
    char *token = strtok(str, " ");
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}

