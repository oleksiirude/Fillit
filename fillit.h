/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpiven <dpiven@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 15:16:21 by dpiven            #+#    #+#             */
/*   Updated: 2018/12/14 15:38:03 by olrudenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

typedef struct		s_crd
{
	int x;
	int y;
}					t_crd;

typedef struct		s_lst
{
	char			**str;
	int				w;
	int				h;
	char			a;
	t_crd			crd[4];
	struct s_lst	*next;
}					t_lst;

char				*ft_changehesh(char *line, int x);
int					ft_cnct(char **str, char c);
int					ft_minsquare(int nb);
char				***ft_malloc_tetr(void);
int					ft_calcheight(char **str, char a);
int					ft_calcwidth(char *str);
char				*ft_strduplastchr(const char *s1, char c);
int					ft_checkline(char *str);
int					ft_checkcolumn(char **str, int y);
t_lst				*ft_filllst(char ***tetr, int i, t_lst *tmp);
int					ft_checksn(int fd, char **argv);
void				**ft_createmtrx(int nb, t_lst *lst);

#endif