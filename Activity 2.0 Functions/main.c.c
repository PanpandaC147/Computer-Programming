#include <stdio.h>
//https://github.com/PanpandaC147/Computer-Programming/blob/7ada774844211a737d2827fca0ba558d9fe2cc35/Acitivty%202.0%20Functions.c
int AG(int sci, int eng, int math, int pe, int hist);
float DA(int sum);

int main()
{
    int sci, eng, math, pe, hist;
    int sum;
    float avg;

    printf("Input five grades:\n");
    scanf("%d%d%d%d%d", &sci, &eng, &math, &pe, &hist);

    sum = AG(sci, eng, math, pe, hist);
    avg = DA(sum);

    printf("Average = %.0f\n", avg);

    return 0;
}

int AG(int sci, int eng, int math, int pe, int hist)
{
    int sum = sci + eng + math + pe + hist;
    return sum;
}

float DA(int sum)
{
    float avg = sum / 5;
    return avg;
}
