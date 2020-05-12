#include "Functions.h"

void createArray(char* tomb, int n)
{
	tomb = (char*)calloc(n, sizeof(char));
	if (!(tomb)) {
		printf("Sikertelen helyfoglalas");
	}
	
}

void ReadArrayfromFile(const char* filename, char* tomb, int* n)
{
	FILE* f;
	f = fopen(filename, "wt");
	if (!f) {
		printf("Sikertelen");
		exit(1);
	}
	fscanf(f, "%i", &n);
	createArray(&tomb, n);
	for (int i = 0; i < n; i++) {
		fscanf(f, "[^\n]", &tomb[i]);
	}
	
}

void PrintArray(char* tomb, int n)
{
	for (int i = 0; i < n; i++) {
		printf("%[^\n]", tomb[i]);
	}

}
