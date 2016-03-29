#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* madlib(char* template, char* adjective, char* noun, char* verb){
	char *news = malloc(strlen(template) + strlen(adjective) + strlen(noun) + strlen(verb));
	sprintf(news, template, adjective, noun, verb);
	return news;
}
