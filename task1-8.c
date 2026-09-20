#include <stdio.h>

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int h, m, s, k;
    scanf("%d %d %d %d", &h, &m, &s, &k);
    int totalSec = h * 3600 + m * 60 + s;
    totalSec = totalSec + k;
    totalSec = totalSec % 86400; //в сутках 86400 секунд
    int ansH = totalSec / 3600;
    int ansM = (totalSec % 3600) / 60;
    int ansS = totalSec % 60;
    printf("%d %d %d", ansH, ansM, ansS);
    return 0;
}