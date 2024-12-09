#include <stdio.h>
#include <string.h>

int main() {
    char str[1000001];
    int count[26] = {0};
    
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 97) {
            count[str[i] - 'A']++;
        }
        else{
            count[str[i] - 'a']++;
        }
    }

    int maxFreq = 0;
    char result = '?';
    int duplicate = 0;

    for (int i = 0; i < 26; i++) {
        if (count[i] > maxFreq) {
            maxFreq = count[i];
            result = 'A' + i;
            duplicate = 0;
        } 
        else if (count[i] == maxFreq) {
            duplicate = 1;
        }
    }

    if (duplicate) {
        printf("?\n");
    } 
    else {
        printf("%c\n", result);
    }

    return 0;
}
