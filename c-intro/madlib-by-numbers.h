#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* makeNewTemplate(char* oldString, int words_count, char*words[]){
	int totalLength = strlen(oldString);
	for(int i = 0; i<words_count; i+=1){
		totalLength += strlen(words[i]);
	}
	char *newTemplate = NULL;
	int tempLength = totalLength*words_count;
	newTemplate = (char*)calloc(tempLength,sizeof(char));

	return newTemplate;
}

char* madlib_by_numbers(char* template, int word_count, char* words[]){
	char* newTemplate = makeNewTemplate(template, word_count, words);
	
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