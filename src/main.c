#include <stdio.h>

int is_even(int n){

    if (n % 2 == 0)
    {

    return 1;
}

    else 
    {
        return 0;
    }
    
}
int main(){

int number; 

    printf("Enter a number: "); 
    scanf("%d", &number); 
 
    if(is_even(number) == 1){
        printf("El numero es par\n");
    }
    else{
        printf("El numero es impar\n");
    }



    return 0; 

}


