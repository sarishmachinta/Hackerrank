#include <stdio.h>

int main() {
    char ch;
    char s[100];
    char sen[100];

    // Read a character
    scanf("%c", &ch);

    // Read a string (word without spaces)
    scanf("%s", s);

    // Read a sentence (with spaces)
    scanf("\n"); // consume newline left by previous input
    scanf("%[^\n]%*c", sen);

    // Print outputs
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}

