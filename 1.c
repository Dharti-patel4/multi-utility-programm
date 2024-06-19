#include<stdio.h>
main()
{
// Q.1 Temperature Converter
//Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
//formula: °F = (9/5 × °C) + 32
	float c,fahrenheit;
    
    printf("Enter the temperature:");
    scanf("%f",&c);
    
    fahrenheit=(c*9/5)+32;
    
    printf("celsius is =%.f\n",c);
    printf("Fahrenheit is =%.2f",fahrenheit);
}
