#include <stdio.h>

int main() {
    int arr[] = {1, 1, 1, 1, 5, 1, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int search, found = 0;
    printf("Array: {");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(",");
        }
    }
    printf("}\n");


    printf("Enter integer to search: ");
    scanf("%d", &search);
 for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d found at index %d\n", search, i);
            found = 1;
            break;
        }
    }
 if (!found) {
        printf("Number not found\n");
    }

    return 0;
}

