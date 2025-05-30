#include <stdio.h>
#include <string.h>

void compress(char *str, int i, char current, int count) {
    if (str[i] == '\0') {
        printf("%c%d", current, count);
        return;
    }

    if (str[i] == current) {
        compress(str, i + 1, current, count + 1);
    } else {
        printf("%c%d", current, count);
        compress(str, i + 1, str[i], 1);
    }
}

int main() {
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);
    compress(str, 1, str[0], 1);
    printf("\n");
    return 0;
}
