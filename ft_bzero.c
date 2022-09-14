/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsuomins <fsuomins@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 00:31:39 by fsuomins          #+#    #+#             */
/*   Updated: 2022/09/15 00:32:12 by fsuomins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
include "libft.h"

void    ft_bzero (void *s, size_t n)
{
    char *clean;
    
    clean = s;
    while(n != '\0')
    {
        *clean++ = 0;
        n--;
    }
}

// int main ()
// {
//     char word[] = "palavra";
//     int size = 7;
//     ft_bzero(word, size);
//     printf(":%s:\n", word);
//     return(0);
// }