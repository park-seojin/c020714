/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 18:14:46 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/14 18:25:26 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*st_strupcase(char *str)
{
	char *temp;

	temp = str;
	while (*temp)
	{
		if (97 <= *temp && *temp <= 122)
			*temp -= 32;
		temp++;
	}
	return (str);
}
