#include "Functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	char* tomb;
	int n;
	ReadArrayfromFile("be1.txt", &tomb, &n);
	PrintArray(tomb, n);
	return 0;
}