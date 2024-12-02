/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tobesnar <tobesnar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:07:25 by tobesnar          #+#    #+#             */
/*   Updated: 2024/12/02 14:41:30 by tobesnar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ft_printf.h"

int	main(void)
{
	printf("===== Test de la fonction ft_printf =====\n");

	// Test de caractères simples
	printf("\n> Char:\n");
	ft_printf("ft_printf: '%c'\n", 'A');
	printf("printf:    '%c'\n", 'A');
	ft_printf("ft_printf: '%c'\n", '\n');
	printf("printf:    '%c'\n", '\n');
	printf("=========================================\n");

	// Test de chaînes de caractères
	printf("\n> String:\n");
	ft_printf("ft_printf: '%s'\n", "Hello, world!");
	printf("printf:    '%s'\n", "Hello, world!");
	ft_printf("ft_printf: '%s'\n", "");
	printf("printf:    '%s'\n", "");
	printf("=========================================\n");

	// Test de pointeurs
	printf("\n> Pointer:\n");
	ft_printf("ft_printf: '%p'\n", (void *)0xdeadbeef);
	printf("printf:    '%p'\n", (void *)0xdeadbeef);
	ft_printf("ft_printf: '%p'\n", NULL);
	printf("printf:    '%p'\n", NULL);
	printf("=========================================\n");

	// Test de décimaux et d'entiers
	printf("\n> Decimal:\n");
	ft_printf("ft_printf: '%d'\n", 42);
	printf("printf:    '%d'\n", 42);
	ft_printf("ft_printf: '%d'\n", -42);
	printf("printf:    '%d'\n", -42);
	ft_printf("ft_printf: '%i'\n", 2147483647);
	printf("printf:    '%i'\n", 2147483647);
	ft_printf("ft_printf: '%i'\n", (int)-2147483648); // Cast explicite pour éviter les erreurs
	printf("printf:    '%i'\n", (int)-2147483648);
	printf("=========================================\n");

	// Test d'entiers non signés
	printf("\n> Unsigned:\n");
	ft_printf("ft_printf: '%u'\n", 0U);
	printf("printf:    '%u'\n", 0U);
	ft_printf("ft_printf: '%u'\n", 4294967295U); // Ajout de U pour indiquer un unsigned
	printf("printf:    '%u'\n", 4294967295U);
	printf("=========================================\n");

	// Test d'hexadécimaux en minuscule
	printf("\n> Hex lower:\n");
	ft_printf("ft_printf: '%x'\n", 255U);
	printf("printf:    '%x'\n", 255U);
	ft_printf("ft_printf: '%x'\n", 0U);
	printf("printf:    '%x'\n", 0U);
	ft_printf("ft_printf: '%x'\n", 4294967295U);
	printf("printf:    '%x'\n", 4294967295U);
	printf("=========================================\n");

	// Test d'hexadécimaux en majuscule
	printf("\n> Hex upper:\n");
	ft_printf("ft_printf: '%X'\n", 255U);
	printf("printf:    '%X'\n", 255U);
	ft_printf("ft_printf: '%X'\n", 0U);
	printf("printf:    '%X'\n", 0U);
	ft_printf("ft_printf: '%X'\n", 4294967295U);
	printf("printf:    '%X'\n", 4294967295U);
	printf("=========================================\n");

	// Test du pourcentage
	printf("\n> Percent:\n");
	ft_printf("ft_printf: '%%'\n");
	printf("printf:    '%%'\n");
	printf("=========================================\n");

	// Cas combinés complexes
	printf("\n> Combined cases:\n");
	ft_printf("ft_printf: Char: %c, String: %s, Dec: %d, Hex: %x, Ptr: %p\n",
		'A', "Test", 123, 456, (void *)0x12345678);
	printf("printf:    Char: %c, String: %s, Dec: %d, Hex: %x, Ptr: %p\n",
		'A', "Test", 123, 456, (void *)0x12345678);

	ft_printf("ft_printf: Mixed: %d %u %x %X %p %s %%\n",
		-1, 4294967295U, 255, 255, (void *)0xdeadbeef, "Hello");
	printf("printf:    Mixed: %d %u %x %X %p %s %%\n",
		-1, 4294967295U, 255, 255, (void *)0xdeadbeef, "Hello");
	printf("=========================================\n");

	return (0);
}


