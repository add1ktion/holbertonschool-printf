#include "main.h"
/**
 * S_func - Fonction qui affiche une string avec formatage spécial.
 * @liste: Liste d'arguments variadiques contenant la string a print.
 *
 * Return: Nombre de caractères imprimés
 */
int S_func(va_list liste)
{
	char *str = va_arg(liste, char *);
	int i, count = 0;
	char hex_map[] = "0123456789ABCDEF";

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		unsigned char c = str[i];

		if (c < 32 || c >= 127) /* caractère non imprimable */
		{
			count += _putchar('\\');
			count += _putchar('x');
			count += _putchar(hex_map[c / 16]);
			count += _putchar(hex_map[c % 16]);
		}
		else
		{
			count += _putchar(c);
		}
	}
	return (count);
}
