/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:39:42 by mflury            #+#    #+#             */
/*   Updated: 2023/05/10 19:08:16 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int argc, char **args)
{
	t_data	var;
	char	*map_path;

	if (argc > 2 || argc < 2)
		error("too few or too much arguments");
	map_path = (char *)args[1];
	var_init(&var);
	map_init(&var, map_path);
	free_tab(&var);
	return (0);
}
