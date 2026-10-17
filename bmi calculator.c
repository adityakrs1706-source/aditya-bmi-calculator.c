#include<stdio.h>
int main() {
    float weight, height, bmi;
    printf("Enter weight in kg: ");
    scanf("%f", &weight);
    printf("Enter height in meters: ");
    scanf("%f", &height);
    printf("bmi = %.2f\n", weight / (height * height));
    if(bmi < 18.5){
        printf("Underweight\n");
    } else if(bmi >= 18.5 && bmi < 25){
        printf("Normal weight\n");
    } else if(bmi >= 25 && bmi < 30){
        printf("Overweight\n");
    } else {
        printf("Obese\n");
    }
    return 0;
}