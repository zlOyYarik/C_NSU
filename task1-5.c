#include <stdio.h>

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //оказывается можно так просто делать и работать с файлами
    int a, b;
    scanf("%d %d", &a, &b);
    int roundDown = a / b;
    if (a < 0 && a % b != 0) {
        roundDown--;
    }
    int roundUp = a / b;
    if (a > 0 && a % b != 0) {
        roundUp++;
    }
    int roundZero = a / b;
    int remainder = a % b;
    if (remainder < 0) {
        remainder += b;
    }
    printf("%d %d %d %d", roundDown, roundUp, roundZero, remainder);
    return 0;
}