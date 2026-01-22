#include <stdio.h>
#define SIZE 10
int main() {
    // Please write your code here.
    int buffer[SIZE];
    int sum = 0;
    double avrg = 0;
    for (int i = 0; i < SIZE; i++) {
        scanf(" %d", &buffer[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        if (buffer[i] < 250) {
            sum += buffer[i];
            avrg = sum / (double)(i+1);

        }
        else {
            break;
        }
    }    

    printf("%d %.1f", sum, avrg);
    return 0;
}