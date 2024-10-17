#include <stdio.h>

int main() {
    int price,n,cost;
    scanf("%d", &price);
    scanf("%d", &n);
    cost = 0;
    for (int i = 0; i < n; i++) {
        int a,b;
        scanf("%d %d", &a, &b);
        cost = cost + a * b;
    }
    if (cost == price) {
        printf("%s\n", "Yes");
    }
    else {
        printf("%s\n", "No");
    }
    return 0;
}
