#include <unistd.h>
#include <stdio.h>

void	ptr_to_hex(char *hex, void *ptr)
{
	int	iter;
	int	mod;

	iter = 14;
	while (ptr > 0)
	{
		unsigned long ptr_i;
		ptr_i = (unsigned long)ptr;

		mod = ptr_i % 16;
		ptr_i /= 16;
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
	char hex[20];

	iter = 0;
	while (iter < size)
	{
//		ft_put_pointer(addr + iter);
		ptr_to_hex(hex, addr);
		iter += 16;
	}
	return (addr);
}

int main()
{
	char lorem[] = "Lorem, ipsum dolor sit amet consectetur \n \12 adipisicing elit. Magni temporibus aliquam cupiditate eum officia vero, possimus, autem ab nulla sed commodi voluptatum deserunt deleniti numquam iure fugit quas amet vitae.";
	ft_print_memory(lorem, 100);
}
