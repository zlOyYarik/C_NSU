#include <stdio.h>

int main(){
    FILE *fp = fopen("input.txt", "r");
    int n;
    int sum = 0;
    fscanf(fp, "%d\n", &n);
    for (int i = 0; i < n; i++){
        int number;
        fscanf(fp, "%d ", &number);
        if (number % 2 != 0){
            sum += number;
        }
    }
    fclose(fp);
    FILE *fpW = fopen("output.txt", "w");
    fprintf(fpW, "%d", sum);
    fclose(fpW);
    return 0;
}