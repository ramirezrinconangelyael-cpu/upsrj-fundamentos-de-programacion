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
        printf("El número es par\n");
    }
    else{
        printf("El número es impar\n");
    }



    return 0; 

}


