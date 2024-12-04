#include <stdio.h>

int main() {
    int a[9][9];
    int b = 0;
    int c = 0, d = 0;
    for (int i = 0; i<9; i++) {
        for(int j = 0; j<9; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] > b) {
                b = a[i][j];
                c = i;
                d = j;
            }
        }
    }
    printf("%d\n%d %d",b,c + 1,d + 1);
    return 0;
}
