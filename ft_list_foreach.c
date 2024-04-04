#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void(*f)(void *))
{
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

/*#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
 {
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int	main(void)
{
	t_list	*a;
	a = malloc(sizeof(t_list));

	t_list	*b;
	b = malloc(sizeof(t_list));

	t_list	*c;
	c = malloc(sizeof(t_list));

	t_list	*node;

	a->data = "Oi";
	b->data = "Ei";
	c->data = "Tchau";

	a->next = b;
	b->next = c;

	node = a;
	ft_list_foreach(node, ft_putstr);
}*/
