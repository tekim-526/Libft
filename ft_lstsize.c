/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tekim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 11:53:35 by tekim             #+#    #+#             */
/*   Updated: 2021/05/09 12:04:34 by tekim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_lstsize(t_list *lst)
{
	int			num;

	num = 0;
	while (lst)
	{
		lst = lst->next;
		num++;
	}
	return (num);
}