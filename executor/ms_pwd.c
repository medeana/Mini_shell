/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: medeana <medeana@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 14:35:16 by medeana           #+#    #+#             */
/*   Updated: 2022/03/14 21:19:31 by medeana          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	ms_pwd(void)
{
	char	c[PATH_MAX];

	if (getcwd(c, sizeof(c)) == NULL)
		return (1);
	printf("%s\n", c);
	return (0);
}
