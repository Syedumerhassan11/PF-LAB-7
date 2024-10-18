#include <stdio.h>

int main() {

    int input[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int pairSum[6]; // Array to store the sum of pairs
    int i;
    printf("Input array: {");
    for (i = 0; i < 12; i++) {
        printf("%d", input[i]);
        if (i != 11) {
            printf(",");
        }
    }
    printf("}\n");

    for (i = 0; i < 6; i++) {
        pairSum[i] = input[2 * i] + input[2 * i + 1];
    }

    // Display the pair sum array
    printf("Pair Sum array: {");
    for (i = 0; i < 6; i++) {
        printf("%d", pairSum[i]);
        if (i != 5) {
            printf(",");
        }
    }
    printf("}\n");

    return 0;
}

