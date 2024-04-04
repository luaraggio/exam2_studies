typedef struct	s_node
{
	struct s_list	*next;
	void	*data;
}		t_node;

int	ft_list_size(t_list *begin_list)
{
	int	i;

	i = 0;
	while (list)
	{
		list = list->next;
		i++;
	}	
	return (i);
}
