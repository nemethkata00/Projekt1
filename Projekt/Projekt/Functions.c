#include "Functions.h"

void createArray(char** tomb, int n)
{
	char* auxtomb;
	auxtomb = (char*)calloc(n, sizeof(char));
	if (!(auxtomb)) {
		printf("Sikertelen helyfoglalas");
	}
	*tomb = auxtomb;
}

void ReadArrayfromFile(const char* filename, char** tomb, int* n)
{
	FILE* f;
	f = fopen(filename, "wt");
	if (!f) {
		printf("Sikertelen");
		exit(1);
	}
	char* auxtomb;
	int auxn;
	fscanf(f, "%i", &auxn);
	createArray(&auxtomb, auxn);
	for (int i = 0; i < auxn; i++) {
		fscanf(f, "[^\n]", &auxtomb[i]);
	}
	*tomb = auxtomb;
	*n = auxn;
}

void PrintArray(char* tomb, int n)
{
	for (int i = 0; i < n; i++) {
		printf("%s", tomb[i]);
	}

}
