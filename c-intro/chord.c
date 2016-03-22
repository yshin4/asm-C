#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){

	char *music[] = {"A","A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};
	
	int i;

	for(i = 0; i<12; i++){
		if(strcmp(argv[1], music[i]) == 0) break;
	}

	printf("$ chord %s\n", argv[1]);
	printf("%s: %s %s %s\n", argv[1], music[i], music[(i+4)%12], music[(i+7)%12]);
	printf("%sm: %s %s %s\n", argv[1], music[i], music[(i+3)%12], music[(i+7)%12]);
	printf("%s7: %s %s %s %s\n", argv[1], music[i], music[(i+4)%12], music[(i+7)%12], music[(i+10)%12]);
	printf("%sdim7: %s %s %s %s\n", argv[1], music[i], music[(i+3)%12], music[(i+6)%12], music[(i+9)%12]);
	return 0; 
}


//Major Chord: 0 + 4 + 7
//Minor Chord: 0 + 3 + 7
//Seventh Chord: 0 + 4 + 7 + 10
//Diminished 7 Chord: 0 + 3 + 6 + 9