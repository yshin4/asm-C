#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "reverse-words.h"

int main(){
	char string[] = "Hello my friends!";
	reverse_words(string);
	assert( strcmp(string,"friends! my Hello") == 0 );

	char empty[] = "";
	reverse_words(empty);
	assert( strcmp(empty,"") == 0 );

	char single[] = "a";
	reverse_words(single);
	assert( strcmp(single,"a") == 0 );

	char space[] = " ";
	reverse_words(space);
	assert( strcmp(space," ") == 0 );

	char potato[] = "Hello    @         dude   @@wazzup";
	reverse_words(potato);
	assert( strcmp(potato,"@@wazzup   dude         @    Hello") == 0 );
	
	return 0;
}