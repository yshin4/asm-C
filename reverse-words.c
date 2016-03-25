#include <stdio.h>

int main(argc, char* argv[]){
	for(int i = argc-1; i>0; i-=1){
		printf("%s ", argv[i]);
	}
}