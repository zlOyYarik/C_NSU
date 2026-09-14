#include <stdio.h>

int main(){
    FILE *inF = fopen("input.txt", "r");
    FILE *ouF = fopen("output.txt", "w");
    int x, y, z;
    fscanf(inF, "%d %d %d", &x, &y, &z);
    int arrXYZ[3] = {x, y, z};
    int lenArr = sizeof(arrXYZ) / sizeof(arrXYZ[0]);
    //я хотел попробовать вычислять длинну списка, я знаю, что в данной задаче она всегда равна 3
    int boolCorrect = isCorrect(arrXYZ, lenArr);
    if (boolCorrect == 1){
        int surface = 2*(x*y + y*z + x*z);
        fprintf(ouF, "%d", surface);
    }
    else{
        if (x <=0){
            fprintf(ouF, "-1");
        }
        else if (y <=0){
            fprintf(ouF, "-2");
        }
        else if (z <=0){
            fprintf(ouF, "-3");
        }
    }
    fclose(inF);
    fclose(ouF);
}

int isCorrect(int arr[], int lenArr){
    for (int i = 0; i < lenArr; i++){
        int number = arr[i];
        if (number <= 0){
            return 0;
        }
    }
    return 1;
}