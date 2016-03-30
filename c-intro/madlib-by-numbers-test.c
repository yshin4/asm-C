#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include "madlib-by-numbers.h"

int main(){
	char* words_to_use[] = {"swim", "brilliant", "git"};

	assert( strcmp(madlib_by_numbers("The 1 2 likes to 0 in the 1 moonlight.", 3, words_to_use), "The brilliant git likes to swim in the brilliant moonlight.") == 0 );
	assert( strcmp(madlib_by_numbers("The 1 2 likes to 0 in the 5 moonlight.", 3, words_to_use), "The brilliant git likes to swim in the 5 moonlight.") == 0 );
	assert( strcmp(madlib_by_numbers("The 12 likes to 02 in the 1 moonlight.", 3, words_to_use), "The brilliantgit likes to swimgit in the brilliant moonlight.") == 0 );
	assert( strcmp(madlib_by_numbers("", 3, words_to_use), "") == 0 );
	
	printf("Test passed");
	return 0;
}