/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mykytaivanov <mykytaivanov@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 10:27:21 by mykytaivano       #+#    #+#             */
/*   Updated: 2025/04/12 17:04:52 by mykytaivano      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

size_t     ft_strlen(const char *str)
{
    size_t    i;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

/*int     main(void)
{
    char    str[] = "911 Turbo S";
    
    printf("%d\n", ft_strlen(str));
    return (0);
}*/