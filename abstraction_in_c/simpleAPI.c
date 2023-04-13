#include <stdio.h>

struct s_api {
	void	(*hello)(void);
	void	(*bye)(void);
};

void ft_hello() {
	printf("sup\n");
}

void ft_bye() {
	printf("hala\n");
}

struct s_api my_api = {
	.hello	= ft_hello,
	.bye	= ft_bye
};

int main() {

	my_api.hello();

	return (0);
}
