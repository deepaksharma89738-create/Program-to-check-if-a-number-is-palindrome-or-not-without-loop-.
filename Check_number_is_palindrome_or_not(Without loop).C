/*Program to check if a number is palindrome or not (without loop)*/
#include <stdio.h>
int main() {
    int num = 121, rev = 0, temp = num;
    rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);
    if (rev == temp)
        printf("%d is palindrome\n", num);
    else
        printf("%d is not palindrome\n", num);
    return 0;
}