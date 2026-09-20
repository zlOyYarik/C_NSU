#include <stdio.h>
#include <string.h>

int main(){
    FILE *inF = fopen("input.txt", "r");
    FILE *ouF = fopen("output.txt", "w");
    int container = 0;
    int n;
    int price;
    fscanf(inF, "%d", &n);
    for (int i = 0; i < n; i++){
        fscanf(inF, "%d", &price);
        float priceFl = (float)price - 0.01f;
        char priceStr[1000];
        char priceFlStr[1000];
        snprintf(priceStr, sizeof(priceStr), "%d", price);
        snprintf(priceFlStr, sizeof(priceFlStr), "%.2f", priceFl);
        int plusNine = find9(priceFlStr);
        int minusNine = find9(priceStr);
        int nine = plusNine - minusNine;
        container += nine;
    }
    fprintf(ouF, "%d", container);
    fclose(inF);
    fclose(ouF);
    return 0;
}

int find9(char str[]){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == '9'){
            count += 1;
        }
    }
    return count;
}