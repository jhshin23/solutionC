#include <stdio.h>
#define SIZE 8

int main() {
    // Please write your code here.
    double score_arr[SIZE];
    double sum = 0;
    double avrg = 0;

    for (int i = 0; i < SIZE; i++) {
        scanf(" %lf", &score_arr[i]);
        sum += score_arr[i];
    }
    avrg = sum / (double)SIZE;
    printf("%.1lf", avrg);

    return 0;
}