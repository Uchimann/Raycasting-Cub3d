#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

typedef struct map 
{
    char **map;
    int mapwidth;
    int mapheight;
    char *path;
    char *direction;

    

    char *sotexturepath;
    char *notexturepath;
    char *eatexturepath;
    char *wetexturepath;

    int noflag;
    int weflag;
    int eaflag;
    int soflag;
    int cflag;
    int fflag;
    int flagcount;
    int if_flag;
} t_map;

void map_control(t_map *map,char *name);
//void checkformat(char *tmp);
char	*get_next_line(int fd);
void	*myfree(void **str);
void    mapread(t_map *map);
int     ft_err(char *str);