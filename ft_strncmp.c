/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbernar <brbernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 06:29:35 by brbernar          #+#    #+#             */
/*   Updated: 2025/06/13 06:44:18 by brbernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	str1[] = "hello";
// 	char	str2[] = "he";
// 	unsigned int	n = 3;
// 	int	res;
// 	int	res_orig;

// 	res_orig = strncmp(str1, str2, n);
// 	res = ft_strncmp(str1, str2, n);

// 	printf("original result: %d\n", res_orig);
// 	printf("result: %d\n", res);

// 	return (0);
// }