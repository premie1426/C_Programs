#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, i = 0;

    printf("Enter a string: ");
    scanf("%s",str);

    while (str[i] != '\0') {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    srand(time(0));
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    for (int j = len - 1; j > 0; j--) {
        int k = rand() % (j + 1);
        char temp = str[j];
        str[j] = str[k];
        str[k] = temp;
    }

    printf("Scrambled string: %s\n", str);

    return 0;
}
