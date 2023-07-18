/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbulak-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 09:58:45 by bbulak-b          #+#    #+#             */
/*   Updated: 2023/05/25 16:04:45 by bbulak-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    int i;
    char    *str;

    str = s;
    i = 0;
    while(str[i] && str[i] != (char)c)
        i++;
    if(str[i] == (char)c)
        return (&str[i]);
    return(NULL);
}

int    main(void)
{
    write (1, strchr("HelloWo\nrld!", 'W'), 3);
    write (1, ft_strchr("HelloWo\nrld!", 'W'), 3);
    return (0);
}
