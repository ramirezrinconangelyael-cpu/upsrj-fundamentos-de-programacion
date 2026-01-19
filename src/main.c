#include <stdio.h>

int main()
{
    double side;
    double area, volume; 

    printf("Enter the side length: ");
    scanf("%lf", &side);

    if(side < 0){

        printf("Error: the side length must be a postivie number.\n");

        return 1; 

    }

    area = side * side; 
    volume = side * side * side;

    printf("Square area: %.2f\n", area); 
    printf("Cube area: %.2f\n", volume);

    return 0; 
    
}


