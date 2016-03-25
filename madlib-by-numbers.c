#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* makeNewString(char* oldString, int words_count, char*words[]){
	int totalLength = strlen(oldString);
	for(int i = 0; i<words_count; i+=1){
		totalLength += strlen(words[i]);
	}
	char* newString = malloc(totalLength*words_count);
	return newString;
}

char* madlib_by_numbers(char* template, int word_count, char* words[]){
	char* newTemplate = makeNewString(template, word_count, words);

	for(int i = 0, j = 0; j<strlen(template); j+=1, i+=1){
		if(isdigit(template[j]) && template[j]-'0' < word_count){
			strcat(newTemplate,words[template[j]-'0']);
			i += strlen(words[template[j]-'0'])-1;
		}else{
			newTemplate[i] = template[j];
		}
	}

	return newTemplate;
}

int main(){
	// char* words_to_use[] = {"swim", "brilliant", "git"};
	// char* template = "The 1 2 likes to 0 in the 1 moonlight.";
	// char* um = madlib_by_numbers(template, 3, words_to_use);
	return 0;
}

