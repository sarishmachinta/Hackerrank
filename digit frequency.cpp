#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    scanf("%s", str);   // read the string

    int freq[10] = {0}; // frequency array for digits 0-9

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            freq[str[i] - '0']++;
        }
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }

    return 0;
}

