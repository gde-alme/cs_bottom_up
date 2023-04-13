#include <stdio.h>
#include <stdlib.h>

/**
 *	simpleAPI:
 *	@ft_hello:	print msg
 *	@ft_bye:	print msg
 *	@s_api:		api struct
*/
typedef struct s_api {
	void	(*hello)(void);
	void	(*bye)(void);
}t_api;

void ft_hello() {
	printf("sup\n");
}

void ft_bye() {
	printf("hala\n");
}

t_api	*_initApi() {
	t_api	*api_object = (t_api*)malloc(sizeof(t_api));
	
	api_object->hello	= ft_hello;
	api_object->bye		= ft_bye;

	return (api_object);
}

t_api myApi = {
	.hello	= ft_hello,
	.bye	= ft_bye
};

int main() {
	//example from book
	myApi.hello();
	
	//example allocating memmory
	t_api	*myApi2 = _initApi();
	myApi2->bye();

	return (0);
}