#include <stdio.h>

int main() {
    int number;

    printf("Input the number: ");
    scanf("%d", &number);

    if (number % 2 == 0) 
    {
        printf("%d is an even number.\n", number);
    } 
    else 
    {
        printf("%d is not an even number.\n", number);
    }

    return 0;
}
