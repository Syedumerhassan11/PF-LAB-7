#include <stdio.h>

int main() {
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int temp, i;
    printf("Before:{");
    for(i=0;i<10;i++){
    	 printf("%d", arr[i]);
        if (i != 9) {
            printf(",");
        }
    }
    printf("{\n");
    temp= arr[0];
     for (i = 0; i < 9; i++) {
        arr[i] = arr[i + 1];
    }
	 arr[9] = temp;
	   printf("After: {");
    for (i = 0; i < 10; i++) {
        printf("%d", arr[i]);
        if (i != 9) {
            printf(",");
        }
    }
    printf("}\n");
return 0;
}
