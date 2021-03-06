/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 16:20:32 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/14 17:45:37 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	while (*str)
	{
		if (!(*str <= 'a' && 'z' <= *str))
			return (0);
		else if (!(*str <= 'A' && 'Z' <= *str))
			return (0);
		str++;
	}
	return (1);
}
