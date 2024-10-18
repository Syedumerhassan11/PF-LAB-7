#include <stdio.h>

int main() {
    int arr[20];
    int i;
    printf("Enter the 20 numbers:\n");
    for(i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Numbers in reverse order:\n");
    for (i = 19; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

