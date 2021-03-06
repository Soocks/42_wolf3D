/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factoriel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsabouri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 10:58:40 by hsabouri          #+#    #+#             */
/*   Updated: 2016/11/08 13:54:23 by hsabouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_factoriel(unsigned int n)
{
	if (n == 0)
		return (1);
	else
		return (n * ft_factoriel(n - 1));
}
