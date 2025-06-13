/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbernar <brbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 05:55:29 by brbernar          #+#    #+#             */
/*   Updated: 2025/06/13 06:28:14 by brbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int	main(void)
// {
// 	char	str1[] = "Hello";
// 	char	str2[] = "Hell";
// 	int	res;
// 	int	res_orig;

// 	res_orig = strcmp(str1, str2);
// 	res = ft_strcmp(str1, str2);

// 	printf("original result: %d\n", res_orig);
// 	printf("ft result: %d\n", res);

// 	return (0);
// }