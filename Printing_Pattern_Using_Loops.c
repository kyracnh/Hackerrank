#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int size = 2 * n - 1;  // The size of the pattern is 2n-1

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Calculate the number to print at position (i, j)
            int min = i < j ? i : j;         // minimum of i and j
            min = min < size - i ? min : size - i - 1;  // minimum of min and size-i-1
            min = min < size - j ? min : size - j - 1;  // minimum of min and size-j-1
            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}
