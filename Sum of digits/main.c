#include <stdio.h>
#include <stdlib.h>

int main (){

   int rem;
   int sum = 0; 
   int n;

    printf("Enter number: ");
    scanf("%d", &n);

    while (n > 0) {
        rem = n%10;
        sum = sum + rem;
        n = n/10;
    }

    printf("The sum of digits is %d", sum);

    return 0;
}