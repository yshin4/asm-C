#include <stdio.h>
#include <string.h>
#include "reverse-range-in-place.h"

// check if the word is one word and just return so it stops running;

void reverse_words(char* string){
	reverse_range_in_place(string, 0, strlen(string));
	
	int start = 0;
	for(int i = 0; i<strlen(string); i+=1){
		if(string[i] == ' '){
			int end = i-1;
			reverse_range_in_place(string, start, end);
			start = i+1;
		}else if(string[i+1] == string[strlen(string)-1]){
			int end = strlen(string)-1;
			reverse_range_in_place(string,start,end);
		}
	}
}


