/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 18:08:36 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/14 18:14:12 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!('!' <= *str && *str <= '~'))
			return (0);
		str++;
	}
	return (1);
}
