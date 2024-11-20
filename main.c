#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

#define GREEN "\033[0;32m"
#define RESET "\033[0m"

int main(void) {
	int original_ret, custom_ret;

/*
	// Testing character output
	printf(GREEN "[x] Testing character output" RESET "\n");
	original_ret = printf("Original: %c\n", 'A');
	custom_ret =ft_printf("Custom:   %c\n", 'A');
	printf("Return values: original=%d, custom=%d\n\n", original_ret, custom_ret);


	// Testing string output
	printf(GREEN "[x] Testing string output" RESET "\n");
	original_ret = printf("Original: %s\n", "Hello, World!");
	custom_ret = ft_printf("Custom:   %s\n", "Hello, World!");
	printf("Return values: original=%d, custom=%d\n\n", original_ret, custom_ret);

	// Testing integer (signed) output
	printf(GREEN "[x] Testing signed integer output" RESET "\n");
	original_ret = printf("Original: %d\n", -12345);
	custom_ret = ft_printf("Custom:   %d\n", -12345);
	printf("Return values: original=%d, custom=%d\n\n", original_ret, custom_ret);

	// Testing integer (signed) with %i
	printf(GREEN "[x] Testing signed integer output with %%i" RESET "\n");
	original_ret = printf("Original: %i\n", 42);
	custom_ret = ft_printf("Custom:   %i\n", 42);
	printf("Return values: original=%d, custom=%d\n\n", original_ret, custom_ret);

	// Testing percent sign
	printf(GREEN "[x] Testing percent sign output" RESET "\n");
	original_ret = printf("Original: %%\n");
	custom_ret = ft_printf("Custom:   %%\n");
	printf("Return values: original=%d, custom=%d\n\n", original_ret, custom_ret);

	return 0;
*/

	// Testing unsigned integer output
	printf(GREEN "[x] Testing unsigned integer output" RESET "\n");
	original_ret = printf("Original: %u\n", -12345U);
	custom_ret = ft_printf("Custom:   %u\n", -12345U);
	printf("Return values: original=%d, custom=%d\n\n", original_ret, custom_ret);

	// Testing hexadecimal (lowercase)
	printf(GREEN "[x] Testing hexadecimal output (lowercase)" RESET "\n");
	original_ret = printf("Original: %x\n", 255);
	custom_ret = ft_printf("Custom:   %x\n", 255);
	printf("Return values: original=%d, custom=%d\n\n", original_ret, custom_ret);

	// Testing hexadecimal (uppercase)
	printf(GREEN "[x] Testing hexadecimal output (uppercase)" RESET "\n");
	original_ret = printf("Original: %X\n", 255);
	custom_ret = ft_printf("Custom:   %X\n", 255);
	printf("Return values: original=%d, custom=%d\n\n", original_ret, custom_ret);

	// Testing hexadecimal -1
	printf(GREEN "[x] Testing hexadecimal -1 output" RESET "\n");
	original_ret = printf("Original: %X\n", -1);
	custom_ret = ft_printf("Custom:   %X\n", -1);
	printf("Return values: original=%d, custom=%d\n\n", original_ret, custom_ret);
	// return 0;

	// Testing pointer output
	printf(GREEN "[x] Testing pointer output" RESET "\n");
	int ptr = 42;
	original_ret = printf("Original: %p\n", &ptr);
	custom_ret = ft_printf("Custom:   %p\n", &ptr);
	printf("Return values: original=%d, custom=%d\n\n", original_ret, custom_ret);


	// Edge case testing
	printf(GREEN "[x] Testing edge cases (INT_MIN, UINT_MAX, etc.)" RESET "\n");
	original_ret = printf("Original: %d, %u, %x, %X\n", INT_MIN, UINT_MAX, 0, 0);
	custom_ret = ft_printf("Custom:   %d, %u, %x, %X\n", INT_MIN, UINT_MAX, 0, 0);
	printf("Return values: original=%d, custom=%d\n\n", original_ret, custom_ret);

	printf(GREEN "[x] Testing edge cases (NULL and special values)" RESET "\n");
	original_ret = printf("Original: %s, %c, %p\n", NULL, 0, NULL);
	custom_ret = ft_printf("Custom:   %s, %c, %p\n", NULL, 0, NULL);
	printf("Return values: original=%d, custom=%d\n\n", original_ret, custom_ret);

	return 0;
}
