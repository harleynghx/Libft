/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hang <hang@student.42kl.edu.my>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 01:44:23 by hang              #+#    #+#             */
/*   Updated: 2023/10/26 00:53:20 by hang             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_isalpha(int x)
{
    if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
        return (1);
    return (0);
}