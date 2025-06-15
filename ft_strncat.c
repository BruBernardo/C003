/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/18 13:37:42 by kube              #+#    #+#             */
/*   Updated: 2025/06/15 21:38:39 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <stdio.h>

char    *ft_strncat(char    *dest,  char    *src,   unsigned int nb)
{
    unsigned    int i   =   0;
    unsigned    int j   =   0;
    
    while (dest[i]  !=  '\0')
    {       
        i++;
    }
        
        while (src[j]   !=  '\0'    &&  j   <   nb)
        {
            dest[i  +   j]  =   src[j];
            j++;
        }
        
        dest[i  +   j]  =   '\0';
        
        return  dest;
}

int main()
{
    char    dest[50]    =   "Hello,";
    char    src[]   =   "hell!";

    ft_strncat(dest,    src,    3);
    printf("%s\n",  dest);
}