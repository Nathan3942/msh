/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnumm.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:57:32 by njeanbou          #+#    #+#             */
/*   Updated: 2024/07/08 12:54:29 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnumm(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| c == 46 || c == 45 || c == 36 || c == 61 || c == 47 || c == 92
		|| c == 95 || c == 126 || c == 63 || c == 42 || c == 58 || c == 125
		|| c == 123 || c == 96 || c == 95 || c == 94 || c == 93 || c == 92
		|| c == 91 || c == 64 || c == 59 || c == 44 || c == 43 || c == 41
		|| c == 40 || c == 38 || c == 37 || c == 36 || c == 35 || c == 33)
		return (1);
	return (0);
}

// c != ' ' || c != '\'' || c != '\"' || c != '|' || c != '<' || c != '>'