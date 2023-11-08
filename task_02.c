#include<stdio.h>
float calculateAvarage(float, float);
int main()
{
    float num1,num2,avarage;
    printf("Enter two floating number:\n");
    scanf("%f%f", &num1, &num2);
    avarage = (num1+num2)/2.0;
    printf("(%f+%f)/2.00 = %f\n",num1,num2,avarage);
    return 0;
}
float calculateAverage(float num1, float num2)
{
  float average = (num1 + num2) / 2.0;
  return average;
}
