#include <stdio.h>

/**
 * main - Entry point to source code
 *
 * Return: 0
 */
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 1;

	int num5 = 1;
	int num6 = 2;
	/*int num7 = 3;
	int num8 = 4;*/

	while (num1 <= 9)
	{
		while (num2 < 9)
		{
			while (num3 <= 9)
			{
				while (num4 <= 9)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(' ');
					putchar(num3 + '0');
					putchar(num4 + '0');
					if (num2 == 8)
					{
						putchar('\n');
						return (0);
					}
					putchar(',');
					putchar(' ');
					num4 += 1;
				}
				num4 = 0;
				num3 += 1;
			}
			num5 += 1;
			num6 += 1;
			num2 = num5;
			num3 = num6;
			num4 = num6;
			num1 += 1;
		}
	}
	return (0);
}
