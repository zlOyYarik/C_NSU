#include <stdio.h>

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m, p, k, l;
    scanf("%d", &n);
    scanf("%d %d %d %d", &m, &p, &k, &l);
    int aptPerFloor = 1;
    while (1) {
        int totalFloor = (p - 1) * l + (k - 1);
        int minM = totalFloor * aptPerFloor + 1;
        int maxM = (totalFloor + 1) * aptPerFloor;
        if (m >= minM && m <= maxM) {
            break;
        }
        aptPerFloor++;
    }
    int curFloor = (n - 1) / aptPerFloor; 
    int ansP = (curFloor / l) + 1;
    int ansK = (curFloor % l) + 1;
    printf("%d %d", ansP, ansK);
    return 0;
}