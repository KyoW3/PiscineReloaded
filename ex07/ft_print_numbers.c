/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwatanab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 11:19:29 by kwatanab          #+#    #+#             */
/*   Updated: 2018/11/06 11:25:31 by kwatanab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int chiffre;

	chiffre = 0;
	while (chiffre <= 9)
	{
		ft_putchar(chiffre + '0');
		chiffre++;
	}
}
