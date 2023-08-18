#include "main.h"
/**
 *print diagonal
 *
 *Return:always 0
 */
void print_diagonal(int n) {
    if (n <= 0) {
        _putchar('\n');
        return;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            _putchar(' '); // Print spaces before the '\'
        }
        _putchar('\\'); // Print the '\'
        _putchar('\n'); // Move to the next line
    }
}
