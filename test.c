typedef struct	s_cadete
{
	char		*nome;
	int		idade;
	int		altura;
	struct s_cadete	*next;
}		t_cadete;

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_list_size(t_cadete *list, int (*f)(char *str), void (*g)(char *str))
{
	int	i;
	int	j;

	i = 0;
	while (list)
	{
		j = (*f)(list->nome);
		(*g)(list->nome);
		list = list->next;
		printf("%d\n", j);
		i++;
	}
	return (i);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_cadete	*a;

	a = malloc(sizeof(t_cadete));
	a->nome = "Luara";

	t_cadete	*b;

	b = malloc(sizeof(t_cadete));
	b->nome = "Pedro";
	a->next = b;

	t_cadete	*c;

	c = malloc(sizeof(t_cadete));
	c ->nome = "Bia";
	b->next = c;

	t_cadete	*node;

	node = a;
	printf("%d\n", ft_list_size(node, ft_strlen, ft_putstr));
}
