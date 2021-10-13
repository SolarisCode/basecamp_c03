/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:46:08 by coder             #+#    #+#             */
/*   Updated: 2021/10/13 21:46:37 by coder            ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	count;
	int	len;

	len = ft_strlen(dest);
	count = 0;
	while (src[count] != '\0')
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
// 	char	left_s[30] = "hello world";
// 	char	right_s[30] = " and myself";

// 	myfun = ft_strcat(left_s, right_s);
// 	sysfun = strcat(left_s, right_s);
// 	printf("My function return > %s\n", myfun);
// 	printf("Sy function return > %s\n", sysfun);
// 	return (0);
// }
