#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    int b = 0;
    for (int i = 1; i < a + 1; i++) {
        b = b + i;
    }
    printf("%d", b);
    
    return 0;
}
