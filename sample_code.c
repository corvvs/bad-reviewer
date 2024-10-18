#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

void reverse_string(char* str) {
    int i, j;
    char temp;
    int len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char input[MAX_LENGTH];
    char* result;

    printf("Enter a string: ");
    scanf("%s", input);

    result = (char*)malloc(strlen(input) + 1);
    strcpy(result, input);

    reverse_string(result);

    printf("Reversed string: %s\n", result);

    return 0;
}
