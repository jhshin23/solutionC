#include <stdio.h>
#define SIZE 10

int main() {
    // Please write your code here.
    char arr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        scanf(" %c", &arr[i]);
    }
    for (int i = SIZE-1; i >= 0; i--) {
        printf("%c", arr[i]);
    }
    return 0;
}