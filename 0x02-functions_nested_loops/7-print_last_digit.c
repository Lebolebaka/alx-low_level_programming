#include "main.h"
/**
 * print_last_digit - prints the last digit of a numer.
 * @n: digit to find the last place of.
 * Return: The last digit.
 */
int print_last_digit(int number) {
    int last_digit = number % 10;
    _putchar(last_digit + '0');  // Convert the digit to its character representation
    _putchar('\n');
    return last_digit;
}
