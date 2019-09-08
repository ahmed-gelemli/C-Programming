#include <stdio.h>

// Fibonnaci Number generator

int main() {
    int i , n1 = 0 , n2 = 1 , n3 , t;
    printf("Enter the number of terms: ");
    scanf("%d", &t);
    for (i = 1; i < t; i++) {
        n3 = n2 + n1;
        n1 = n2;
        n2 = n3;
        printf("%d \n" , n3);
    }

    return 0;
}
