/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:47:38 by coder             #+#    #+#             */
/*   Updated: 2021/10/13 21:54:19 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
// #include <string.h>
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
		count ++;
	return (count);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		count;
	int		len;
	int		x;

	count = 0;
	len = ft_strlen(to_find);
	if (to_find[count] == '\0')
		return (str);
	while (str[count] != '\0')
	{
		x = 0;
		while (str[count + x] == to_find[x] && to_find[x] != '\0')
		{
			if (x == len - 1)
				return (&str[count]);
			x ++;
		}
		count ++;
	}
	return (0);
}	

// int	main(void)
// {
// 	char	str[100] = "Hello is World, tomorrow is better";
// 	char	*sub;
// 	char	*sub1;

// 	sub = ft_strstr(str, "tom");
// 	sub1 = strstr(str, "tom");
// 	printf("myfun out: %s\n", sub);
// 	printf("sysfu out: %s\n", sub1);
// 	return (0);
// }
