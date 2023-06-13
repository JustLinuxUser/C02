#include <unistd.h>
#include <stdio.h>

void	char_to_hex(char *hex, unsigned char c)
{
	int	iter;
	int	mod;

	iter = 14;
	while (c > 0)
	{
		mod = c % 16;
		c /= 16;
		if (mod < 10)
			hex[iter] = '0' + mod;
		else
			hex[iter] = 'a' + mod - 10;
		iter--;
	}
	while (iter <= 1)
	{
		hex[iter] = 0;
		iter++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_put_pointer(char *ptr){
	printf("%p:\n", ptr);
}
void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int iter;

	iter = 0;
	while (iter < size)
	{
		ft_put_pointer(addr + iter);
		iter += 16;
	}
	return (addr);
}

int main()
{
	char lorem[] = "Lorem, ipsum dolor sit amet consectetur \n \12 adipisicing elit. Magni temporibus aliquam cupiditate eum officia vero, possimus, autem ab nulla sed commodi voluptatum deserunt deleniti numquam iure fugit quas amet vitae.";
	ft_print_memory(lorem, 100);
}
