/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <nboste@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/19 15:13:02 by nboste            #+#    #+#             */
/*   Updated: 2017/03/19 15:16:03 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H

# include "types.h"
# include "error.h"

typedef struct		s_wolf3d
{
	t_scene			scene;
}					t_wolf3d;

void	init_app(t_env *env);

int		process_app(void *env);

void	destroy_app(t_env *env);

#endif
