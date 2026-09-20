#include <stdio.h>

int main() {
    FILE *inF = fopen("input.txt", "r");
    FILE *ouF = fopen("output.txt", "w");
    int n;
    fscanf(inF, "%d", &n);
    int isPrime = 1; 
    if (n < 2) {
        isPrime = 0;
    } else {
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime == 1) {
        fprintf(ouF, "YES");
    } else {
        fprintf(ouF, "NO");
    }
    fclose(inF);
    fclose(ouF);
    return 0;
}
