/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpankrat <mpankrat@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 15:20:50 by mpankrat          #+#    #+#             */
/*   Updated: 2026/10/31 15:21:08 by mpankrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *)big);
	j = 0;
	while (j < n && big[j])
	{
		i = 0;
		while (j < n && little[i] && big[i] && little[i] == big[j])
		{
			i++;
			j++;
		}
		if (little[i] == '\0')
			return ((char *)&big[j - i]);
		j = j - i + 1;
	}
	return (0);
}
/*
int main() {
    char    *big = "ASDASD123";
    char    *little = "ASDJ";
    size_t  max = strlen(little);

    char    *i1 = strnstr(big, little, max);
    char    *i2 = ft_strnstr(big, little, max);


    printf("strnstr: %s\nft_strnstr: %s\n", i1,i2);
    return 0;
}
*/
