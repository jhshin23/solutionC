#include <stdio.h>
#define SIZE 100
int main() {
    // Please write your code here.
    int subject_N;
    double subject_score_arr[SIZE];
    double sum = 0;
    double avrg = 0;
    scanf("%d", &subject_N);

    for (int i = 0; i < subject_N; i++) {
        scanf("%lf", &subject_score_arr[i]);
    }

    for (int i = 0; i < subject_N; i++) {
        sum += subject_score_arr[i];
    }
    avrg = sum / (double)subject_N;
    printf("%.1f\n", avrg);
    if ((int)avrg >= 4) printf("Perfect\n");
    else if ((int)avrg >= 3) printf("Good\n");
    else printf("Poor\n");
    return 0;
}