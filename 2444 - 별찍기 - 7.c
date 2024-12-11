#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++){
        for (int j = 1; a - i > j; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * (i+1) -1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = a - 1; i > 0; i--) {
        for (int j = 0; j < a-i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
} 
