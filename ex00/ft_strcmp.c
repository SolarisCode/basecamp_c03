/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:45:01 by coder             #+#    #+#             */
/*   Updated: 2021/10/13 21:45:17 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0')
	{
		if (s1[count] > s2[count])
			return (1);
		else if (s1[count] < s2[count])
			return (-1);
		count ++;
	}
	if (s1[count] > s2[count])
		return (1);
	else if (s1[count] < s2[count])
		return (-1);
	return (0);
}

// int main(void)
// {
// 	int		myfun;
// 	int		sysfun;
// 	char	left_s[] = "hello world";
// 	char	right_s[] = "hello world";

// 	myfun = ft_strcmp(left_s, right_s);
// 	sysfun = strcmp(left_s, right_s);
// 	printf("My function return > %d\n", myfun);
// 	printf("Sys function return > %d\n", sysfun);
// 	return (0);
// }
