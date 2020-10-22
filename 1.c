#include <stdio.h>

void GetFaultScore(unsigned int x, unsigned int y, unsigned int a, unsigned int b, unsigned int c)
{
    unsigned int m, n;
    for (m = 1, n = 23 - m; (m < x) && (n < y); m++, n = 23 - m) {
        unsigned int score = m * a + n * b + 7 * c;// printf("score: %u\n", score);
        if (score == 67) {
            printf("m: %u\t n: %u\n", m, n);
        }
    }
}

int main()
{
    unsigned int a, b, c, x, y;

    for (a = 1; a < 4; a++) {
        for (b = a + 1; b < 5; b++) {
            for (c = b + 1; c < 7; c++) {
                for (x = 10; x < 30; x++) {
                    y = 60 - x;
                    unsigned int num = a * x + b * y + 10 * c;
                    if (num == 152) {
                        printf("x    y    z\n%-5u%-5u%-5u\n%-5u%-5u%-5u\n", x, y, 10, a, b, c);
                        GetFaultScore(x, y, a, b, c);
                        printf("\n---------------------------------------------\n\n");
                    }
                }
            }
        }
    }



    return 0;
}