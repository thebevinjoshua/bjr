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