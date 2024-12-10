#include <stdio.h>
#include <string.h>

int main() {
    int a = 101;
    char b[a];
    scanf("%s", b);
    int c = strlen(b);
    int p = 1;
    
    for (int i = 0; i < c / 2; i++) {
        if (b[i] != b[c-1-i]) {
            p = 0;
        }
    }

    if (p) {
        printf("%d", 1);
    }
    else {
        printf("%d", 0);
    }
    
    return 0;
}
