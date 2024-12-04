#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d" , &a,&b);
    int c[a][b];
    int d;
    for(int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &c[i][j]);
        }
    }
    
    for(int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &d);
            c[i][j] += d;
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
