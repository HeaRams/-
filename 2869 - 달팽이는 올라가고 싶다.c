#include <stdio.h>

int main() {
    long a,b,c;
    scanf("%ld %ld %ld", &a,&b,&c);
    if (c-a <= 0) {
        printf("%d", 1);
    }
    else {
        if ((c -a ) % (a-b) == 0){
            printf("%ld", 1 + ( c - a ) / ( a - b ));
        }
        else {
            printf("%ld", 2 + ( c - a ) / ( a - b ));
        }
    }
    return 0;
}
