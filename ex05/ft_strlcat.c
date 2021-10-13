/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:47:49 by coder             #+#    #+#             */
/*   Updated: 2021/10/13 21:48:36 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
		count ++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	len;
	unsigned int	temp;

	count = 0;
	len = ft_strlen(dest);
	temp = len;
	if (size <= len)
		return (size + ft_strlen(src));
	while (src[count] != '\0')
	{
		if (temp < size - 1)
		{
			dest[temp] = src[count];
			temp ++;
		}
		count ++;
	}
	if (temp < size)
		dest[temp] = '\0';
	len = len + count;
	return (len);
}

// int	main()
// {
// 	char first[] = "This is ";
// 	char last[] = "a potentially long string";
// 	int r;
// 	char dest[40];

// 	strcpy(dest,first);
// 	r = ft_strlcat(dest, last, 40);
// 	printf("%s\n", dest);
// 	printf("Value returned: %d\n",r);
// 	return(0);
// }
