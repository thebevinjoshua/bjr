#include <stdio.h>
 
int main()
{
    float celsius, fahrenheit;
 
    printf("Please Enter temperature in Celsius: \n");
    scanf("%f", &celsius);
 
    // Convert the temperature
    fahrenheit = ((celsius * 9)/5) + 32;
    // fahrenheit = ((9/5) * celsius) + 32;
    // fahrenheit = ((1.8 * celsius) + 32;
 
    printf("\n %.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
 
    return 0;
}

o/p:
Please Enter temperature in Celsius: 
45
45.00 Celsius = 113.00 Fahrenheit

Please Enter temperature in Celsius: 
33 
33.00 Celsius = 91.40 Fahrenheit
