//* Input P,N,R to calculate simple and compound interest

#include <stdio.h>
#include <math.h>

int main()
{
    float P, N, R, SI, CI;
    printf("\nEnter P,N,R to calculate Interest:\n>> ");
    scanf("%f,%f,%f", &P, &N, &R);
    SI = (P * N * R) / 100;
    CI = (P * pow((1 + R / 100), N)) - P;
    printf("\n-- SI is: %.2f", SI);
    printf("\n-- CI is: %.2f", CI);
    printf("\n\n");
    return 0;
}