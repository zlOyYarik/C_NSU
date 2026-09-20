#include <stdio.h>

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long n;
    scanf("%lld", &n);
    long long count = 0;
    //короче задумка в том, что сторона а - самая маленькая, б - средняя, а с - самая большая
    for (long long a = 1; a * a * a <= n; a++) {
        for (long long b = a; a * b * b <= n; b++) {
            long long maxC = n / (a * b);
            count = count + (maxC - b + 1);
        }
    }
    printf("%lld", count);
    return 0;
}