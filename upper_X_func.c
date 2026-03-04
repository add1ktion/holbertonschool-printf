#include "main.h"
/**
* X_func - Fonction qui affiche un entier en hexadécimal majuscule.
* @liste: Liste d'arguments variadiques contenant l'entier à imprimer.
*
* Cette fonction récupère un int non signé via va_arg,
* décompose l'entier en chiffres hexadécimaux (base 16, a-f),
* puis affiche chaque chiffre avec _putchar.
*
* Return: Nombre de caractères imprimés.
*/
int X_func(va_list liste)
{
	unsigned int n = va_arg(liste, unsigned int);
	char hex_digits[] = "0123456789ABCDEF";
	int count = 0;
	char buffer[20];
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		buffer[i++] = hex_digits[n % 16];
		n /= 16;
	}

	i--;
	while (i >= 0)
	{
		count += _putchar(buffer[i--]);
	}

	return (count);
}
