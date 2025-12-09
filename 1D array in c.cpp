#include <stdio.h>
#include <stdlib.h>  // for malloc and free

int main() {
    int n;
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    int *arr = (int*) malloc(n * sizeof(int));

    int sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // accumulate sum
    }

    printf("%d\n", sum);

    // Free allocated memory
    free(arr);

    return 0;
}

