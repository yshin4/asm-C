#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){

	char *interval[] = {"perfect octave", "major seventh", "minor seventh", "major sixth", "minor sixth", "perfect fifth", 
	"tritone", "perfect fourth", "major third", "minor third", "major second", "minor secod"};

	char *music[] = {"A","A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};

	int firstChord, secondChord;
	for(int i = 0; i<12; i++){
		if(strcmp(argv[1], music[i]) == 0){
			firstChord = i;
		}else if(strcmp(argv[2], music[i]) == 0){
			secondChord = i;
		}
	}

	printf("$ interval %s %s\n", argv[1], argv[2]);
	printf("%s to %s is a %s\n", argv[1], argv[2], interval[firstChord-secondChord]);
	
	return 0;
}