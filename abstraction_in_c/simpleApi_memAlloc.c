#include <stdio.h>
#include <stdlib.h>

/**
 *	simpleAPI:
 *	@ft_hello:	print msg
 *	@ft_bye:	print msg
 *	@s_api:		api struct
 *	@_initApi:	instantiate a s_api object
*/

typedef struct s_api {
	void	(*hello)(void);
	void	(*bye)(void);
}t_api;

void ft_hello() {
	printf("Hello world\n");
}

void ft_bye() {
	printf("Bye now\n");
}

t_api	*_initApi() {
	t_api	*api_object = (t_api*)malloc(sizeof(t_api));
	
	api_object->hello	= ft_hello;
	api_object->bye		= ft_bye;

	return (api_object);
}

//example allocating memmory
int main() {	
	t_api	*myApi2 = _initApi();

	myApi2->bye();

	return (0);
}