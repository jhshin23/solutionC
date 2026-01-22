#include <stdio.h>
#define SIZE 10

int main() {
    // Please write your code here.
    int arr[SIZE];
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}