/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mflury <mflury@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:53:16 by mflury            #+#    #+#             */
/*   Updated: 2023/05/10 18:53:38 by mflury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>
# include "get_next_line.h"

typedef struct s_pdata {
	char		*relative_path_player;
	int			posx;
	int			posy;
}				t_pdata;

typedef struct s_mdata {
	int			fd;
	char		*line;
	char		**tab; 
	int			tabx;
	int			taby;
	int			tabmaxx;
	int			tabmaxy;
	int			pcount;
	int			ccount;
	int			ecount;
	char		*relative_path_ground;
	char		*relative_path_wall;
	char		*relative_path_door;
	char		*relative_path_item;
	
}				t_mdata;

typedef struct s_data {
	void		*img;
	char		*addr;
	int			bits_per_pixel;
	int			line_length;
	int			endian;
	void		*mlx;
	void		*mlx_win;
	int			img_width;
	int			img_height;
	t_pdata		player;
	t_mdata		map;
}				t_data;

void	var_init(t_data *var);
int		map_init(t_data *var, char *map_path);
int		map_parser(t_data *var, char *map_path);
int		map_checker(t_data *var);

int		first_last_line(t_data *var);
int		first_last_column(t_data *var);
void	pce_counter(t_data *var);
void	error(char *msg);
size_t	ft_strlen(const char *str);
int		floodfiller(t_data *var);

void	free_copy(char **copy);
void	free_tab(t_data *var);
void	free_line(t_data *var);

#endif
