/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboste <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 23:50:04 by nboste            #+#    #+#             */
/*   Updated: 2017/03/19 15:12:21 by nboste           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "engine.h"
#include "wolf3d.h"

int		main(int argc, char **argv)
{
	t_env	env;

	env.app.argc = argc;
	env.app.argv = argv;
	env.win.name = "Wolf3d";
	env.win.size.x = 1920;
	env.win.size.y = 1080;
	engine_init(&env, &init_app, &process_app, &destroy_app);
	return (engine_run(&env));
}
