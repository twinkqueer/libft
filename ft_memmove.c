/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <mpankrat@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:17:12 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/31 15:17:12 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*cd;
	char	*csrc;

	cd = (char *)dest;
	csrc = (char *)src;
	if (!dest && !src)
		return (0);
	if (dest <= src)
	{
		while (n--)
			*cd++ = *csrc++;
	}
	else if (dest > src)
	{
		cd += n - 1;
		csrc += n - 1;
		while (n--)
			*cd-- = *csrc--;
	}
	return (dest);
}
