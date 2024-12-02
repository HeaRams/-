#include <stdio.h>
#include <string.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 0; i<a; i++) {
        int b;
        char c[30];
        scanf("%d %s", &b, c);
        int d = strlen(c);
        
        for (int k = 0; k < d; ++k) {
            for (int j = 0; j < b; j++) {
                printf("%c", c[k]);
                
            }
        }
        printf("\n");
    }
    return 0;
}
