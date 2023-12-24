#include<stdio.h>
void celsiusToFahrenheit(float cel)
{
    float fah=1.0;
    fah=cel*9/5+32;
    printf("Temprature in Fahrenheit= %f\n",fah);
}
void fahrenheitToCelsius(float fah)
{
    float cel=1.0;
    cel=(fah-32)*5/9;
    printf("Temprature in Celsius= %f\n",cel);
}
void main()
{
    float cel,fah;
    printf("Enter temprature in Celsius: ");
    scanf("%f",&cel);
    celsiusToFahrenheit(cel);
    printf("Enter temprature in Fahrenheit: ");
    scanf("%f",&fah);
    fahrenheitToCelsius(fah);
}
