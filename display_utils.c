/*
** display_utils.c for tetris in /home/thibrex/Dropbox/delivery/PSU/PSU_2016_tetris
** 
** Made by Thibaut Cornolti
** Login   <thibaut.cornolti@epitech.eu>
** 
** Started on  Fri Mar 10 11:19:37 2017 Thibaut Cornolti
** Last update Fri Mar 10 12:28:56 2017 Thibaut Cornolti
*/

#include <time.h>
#include <sys/types.h>
#include <fcntl.h>
#include "tetris.h"

void		draw_title()
{
  int		fd;
  int		i;
  char		*buff;

  fd = open("title.txt", O_RDONLY);
  i = 0;
  start_color();
  init_pair(1, 1, COLOR_BLACK);
  init_pair(2, 2, COLOR_BLACK);
  init_pair(3, 3, COLOR_BLACK);
  init_pair(4, 4, COLOR_BLACK);
  init_pair(5, 5, COLOR_BLACK);
  init_pair(6, 6, COLOR_BLACK);
  init_pair(7, 7, COLOR_BLACK);
  while ((buff = get_next_line(fd)))
    {
      draw_title_te(buff, i);
      i += 1;
    }
  close(fd);
}

void		draw_stats(t_game *g, t_pars *p)
{
  int		m;
  int		s;

  m = (time(NULL) - g->start_time) / 60;
  s = (time(NULL) - g->start_time) % 60;
  create_box_sl(15, 3, 11, 28);
  mvprintw(15 + 2, 5, "High Score");
  mvprintw(15 + 2, 29 - my_intlen(g->high_score), "%d", g->high_score);
  mvprintw(15 + 3, 5, "Score");
  mvprintw(15 + 4, 29 - my_intlen(g->score), "%d", g->score);
  mvprintw(15 + 6, 5, "Lines");
  mvprintw(15 + 6, 29 - my_intlen(g->line), "%d", g->line);
  mvprintw(15 + 7, 5, "Level");
  mvprintw(15 + 7, 29 - my_intlen(g->level), "%d", g->level);
  mvprintw(15 + 9, 5, "Timer");
  mvprintw(15 + 9, 24, "%s%d:%s%d",
	   (m < 10) ? "0" : "", m, (s < 10) ? "0" : "", s);
}
