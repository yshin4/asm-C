#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char *um = "a0c";
	char c = '0';

	if(isdigit(um[1])){
		printf("%d",um[1]-c);
	}
	return 0;
}