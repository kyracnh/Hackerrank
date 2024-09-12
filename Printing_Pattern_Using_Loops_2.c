#include <stdio.h>

void printPattern(int n) {
    int size = 2 * n - 1;  // Size of the pattern matrix

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            // Determine the value to print based on the minimum distance to the nearest edge
            int top = i;
            int left = j;
            int bottom = size - i + 1;
            int right = size - j + 1;

            // The value printed is determined by the minimum of these distances from the edges
            int value = n - (top < bottom ? (top < left ? top : left) : (bottom < right ? bottom : right)) + 1;

            printf("%d ", value);
        }
        printf("\n");  // Move to the next line after each row
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printPattern(n);

    return 0;
}

