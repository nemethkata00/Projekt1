#include "Functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void szo_beolvasasa_allomanybol(const char* filename, char szo[20])
{
	FILE* f;
	int random, sorszam = 0;
	f = fopen(filename, "rt");
	if (!f) {
		printf("Sikertelen allomanymegnyitas");
	}
	srand(time(NULL));
	random = rand() % 10 + 1;
	while (sorszam <= random && fscanf(f, "%s", szo)!=EOF) {
		sorszam++;
	}
	fclose(f);
}

void csillagga_alakitas(char szo[20], char titkos_szo[20])
{
	int length = strlen(szo);
	for (int i = 0; i < length; i++) {
		if (titkos_szo[i] != ' ') {
			titkos_szo[i] = '*';
		}
		else {
			titkos_szo[i] = ' ';
		}
	}
}

int betu_teszteles(char tippelt_betu, char titkos_szo[20], char szo[20])
{
	int talalat = 0;
	for (int i = 0; titkos_szo[i] != '\0'; i++) {
		if (tippelt_betu == szo[i]) {
			return 0;
		}
		if (tippelt_betu == titkos_szo[i]) {
			szo[i] = tippelt_betu;
			talalat++;
		}
	}
	return talalat;
}

void betu_betevese_ellenorzese(char tippelt_betu, char szo[20], char titkos_szo[20])
{
	int rossz_talalatok_szama = 0, Max_talalat;
	Max_talalat = strlen(szo) + 1;
	while (rossz_talalatok_szama < Max_talalat) {
		printf("%s", titkos_szo);
		printf("\n\nTippelj egy betut: ");
		scanf("%c", &tippelt_betu);
		fflush(stdin);
		if (betu_teszteles(tippelt_betu, szo, titkos_szo) == 0) {
			printf("\nEz a betu nem talalhato meg a szoban. \n");
			rossz_talalatok_szama++;
		}
		else {
			printf("\nSzuper!Kitalaltal egy betut, csak igy tovabb!\n");
		}
		printf("Meg van %i talalatod.\n", Max_talalat - rossz_talalatok_szama);

		if (strcmp(szo, titkos_szo) == 0) {
			printf("%s\n", szo);
			printf("Ezaz! Kitalaltad!");
			break;
		}
	}
	if (rossz_talalatok_szama == Max_talalat) {
		printf("Vesztettel!");
		printf("A szo a kovetketo volt: %s\n", szo);
	}
	getch();
}

/*void kiiratas(char szo[20])
{
	printf("%s\n", szo);
}*/
