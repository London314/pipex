/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omougel <omougel@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:14:55 by omougel           #+#    #+#             */
/*   Updated: 2024/03/04 10:18:02 by omougel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/include/libft.h"
# include <stdio.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <errno.h>

t_list	*fill_pipex(char **argv, char **envp);
int		ft_do_the_pipe(char **argv, t_list *pipex, int *fd, char **envp);
void	ft_exit(void);
void	ft_close_all(int fd1, int fd2);

#endif // !PIPEX_H
