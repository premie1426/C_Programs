#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "password";
    char input[50];
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter password: ");
        scanf("%s", input);

        if (strcmp(input, password) == 0) {
            printf("Login successful!\n");
            return 0;
        } else {
            attempts--;
            printf("Incorrect password. Attempts left: %d\n", attempts);
        }
    }

    printf("Login failed\n");
}
