#include <stdio.h>

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    scanf("%d", &n);
    int min, max;
    int minIdx = 1, maxIdx = 1;
    for (int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        if (i == 1) {
            min = x;
            max = x;
        }
        else {
            if (x < min) {
                min = x;
                minIdx = i;
            }
            if (x > max) {
                max = x;
                maxIdx = i;
            }
        }
    }
    printf("%d %d %d %d\n", min, minIdx, max, maxIdx);
    return 0;
}