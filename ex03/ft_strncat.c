/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:46:46 by coder             #+#    #+#             */
/*   Updated: 2021/10/13 21:47:23 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count ++;
	return (count);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count;
	int				len;

	len = ft_strlen(dest);
	count = 0;
	while (count < nb && src[count] != '\0')
	{
		dest[len] = src[count];
		len ++;
		count ++;
	}
	dest[len] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char	*myfun;
// 	char	*sysfun;
// 	char	left_s[50] = "hello world";
// 	char	right_s[50] = " and myself";

// 	myfun = ft_strncat(left_s, right_s, 7);
// 	sysfun = strncat(left_s, right_s, 7);
// 	printf("My function return > %s\n", myfun);
// 	printf("Sy function return > %s\n", sysfun);
// 	return (0);
// }
