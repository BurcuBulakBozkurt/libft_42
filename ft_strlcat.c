/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbulak-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 08:54:56 by bbulak-b          #+#    #+#             */
/*   Updated: 2023/05/25 15:54:20 by bbulak-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  len_dst;
    size_t  res;
    size_t  len_src;
    size_t  i;

    len_dst = ft_strlen(dst);
    len_src = ft_strlen(src);
    res = 0;
    i = 0;
    if (size > len_dst)
        res = len_src + len_dst;
    else
        res = len_src + size;
    while (src[i] != '\0' && (len_dst + 1) < size)
    {
        dst[len_dst] = src[i];
        len_dst++;
        i++;
    }
    dst[len_dst] = '\0';
    return (res);
}

/*
int main(void)
{
    char    src[] = "World";
    char    dst[15] = "Hello";

    printf("strlcat: %ld \n", ft_strlcat(dst,src,7));
    printf("Copied string: %s\n", dst);

    return (0);
}*/
