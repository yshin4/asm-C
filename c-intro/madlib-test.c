#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "madlib.h"

int main(){
	assert(strcmp(madlib("The %s %s likes to %s in the moonlight.", "brilliant", "git", "swim"), "The brilliant git likes to swim in the moonlight.") == 0);
	return 0;
}