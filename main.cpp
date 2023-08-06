#include "mbed.h"

// main() runs in its own thread in the OS
//0,1,1,2,3,5,8,13........fibonacci numbers
int fib(int n){
    if(n == 1)
        return 0;  //returns first number as 0
    if (n == 2)
        return 1;  //returns second number as 1
    else
        return(fib(n-1) + fib(n - 2));  //returns next number as sum of last two numbers

        

}

int main()
{
    printf("Lab 2 Program, \r\n");
    printf("2nd commit , \r\n");
    int max_term = 11;  //  max value of i

    for(int i=1; i<=max_term; i++){ // increases i by 1 until i reaches 11
        printf("%d, ", fib(i));  //prints each number as a sequence in for i
    }
    printf("\r\n");
    while (true) {
    }
    
    
}

