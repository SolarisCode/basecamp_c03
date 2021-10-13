/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:45:23 by coder             #+#    #+#             */
/*   Updated: 2021/10/13 21:45:41 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n && s1[count] != '\0' && s2[count] != '\0')
	{
		if (s1[count] > s2[count])
			return (32);
		else if (s1[count] < s2[count])
			return (-32);
		count ++;
	}
	if (count != n && s1[count] > s2[count])
		return (32);
	else if (count != n && s1[count] < s2[count])
		return (-32);
	return (0);
}

// int main(void)
// {
// 	int		myfun;
// 	int		sysfun;
// 	char	left_s[] = "hello";
// 	char	right_s[] = "hello worlde";

// 	myfun = ft_strncmp(left_s, right_s, 5);
// 	sysfun = strncmp(left_s, right_s, 5);
// 	printf("My function return > %d\n", myfun);
// 	printf("Sys function return > %d\n", sysfun);
// 	return (0);
// }
