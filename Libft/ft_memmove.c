/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpop <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 19:49:23 by gpop              #+#    #+#             */
/*   Updated: 2017/11/27 20:26:47 by gpop             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp;
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;
	size_t			i;

	dst_ptr = (unsigned char*)dest;
	src_ptr = (unsigned char*)src;
	tmp = (unsigned char*)malloc(n * sizeof(unsigned char));
	i = 0;
	while (i < n)
	{
		tmp[i] = src_ptr[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		dst_ptr[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (dest);
}