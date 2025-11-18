//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, swappedNum, middlePart;

    printf("Enter a number: ");
    scanf("%d", &num);
    digits = (int)log10(num);
    firstDigit = num / (int)pow(10, digits);
    lastDigit = num % 10;
    middlePart = (num % (int)pow(10, digits)) / 10;
    swappedNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
