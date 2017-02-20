/*
** parser.h for tetris in /home/thibrex/Dropbox/delivery/PSU/PSU_2016_tetris
** 
** Made by Thibaut Cornolti
** Login   <thibaut.cornolti@epitech.eu>
** 
** Started on  Mon Feb 20 13:27:16 2017 Thibaut Cornolti
** Last update Mon Feb 20 17:46:50 2017 Thibaut Cornolti
*/

#ifndef PARSER_H_
# define PARSER_H_

#include <curses.h>

# define DEF_L		1
# define DEF_KL		KEY_LEFT
# define DEF_KR		KEY_RIGHT
# define DEF_KT		KEY_UP
# define DEF_KD		KEY_DOWN
# define DEF_KQ		'Q'
# define DEF_KP		' '
# define DEF_ROW	20
# define DEF_COL	10
# define DEF_W		0
# define DEF_D		0

typedef struct	s_pars
{
  int		l;
  int		kl;
  int		kr;
  int		kt;
  int		kd;
  int		kq;
  int		kp;
  int		row;
  int		col;
  int		w;
  int		d;
}		t_pars;

void		my_super_parser(t_pars *, char **);
int		**init_val(t_pars *);
char		**init_arg_max();
char		**init_arg_min();
int		contains_tab(char *, char **);
int		contains_char(char *, char);

#endif /* !PARSER_H_ */
