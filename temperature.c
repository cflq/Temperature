#include <stdio.h>
#include <ctype.h>

int main(){

char unit ;
float temp ;

    printf("is the temperature in (C) or (F) ? : ");
    scanf("%c" , &unit);

unit = toupper(unit);

if (unit == 'C'){

    printf("\nenter the temperature in Celsius : ");
    scanf("%f" , &temp);

temp = (temp * 9 / 5) + 32;

    printf("\nThe temperature in Fahrenheit is : %.1f " , temp);}

else if (unit == 'F'){

    
    printf("\nenter the temperature in Fahrenheit : ");
    scanf("%f" , &temp);

temp = (temp - 32) * 5 / 9;

    printf("\nThe temperature in Celsius is : %.1f" , temp);}

    else
    
    printf("Error enter a valid Unit");


    return 0;
}