/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miyolchy <miyolchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 18:09:00 by miyolchy          #+#    #+#             */
/*   Updated: 2025/01/28 01:28:38 by miyolchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new_list)
{
	new_list->next = *lst;
	*lst = new_list;
}
/*
#include <stdio.h>

int main(void)
{
	t_list *first;
	first = ft_lstnew("Hello,");
	
	t_list *second;
	second = ft_lstnew(" world!");
	
	ft_lstadd_front(&second, first);
	
	printf("%s%s\n", (char *)first->content, (char *)first->next->content);

	free(first);
	free(first->next);
	
	return (0);
}*/