#include "Functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>


void szo_beolvasasa_allomanybol(const char* filename, char szo[20])
{
	FILE* f;
	int random, sorszam = 0;
	f = fopen(filename, "rt");
	if (!f) {
		printf("Sikertelen allomanymegnyitas");
	}
	srand(time(NULL));
	random = rand() % 56 + 1;
	while (sorszam <= random && fscanf(f, "%s", szo)!=EOF) {
		sorszam++;
	}
	fclose(f);
}


void csillagga_alakitas(char szo[20], char titkos_szo[20])
{
	int length = strlen(szo);
	for (int i = 0; i < length; i++) {
		if (szo[i] != ' ') {
			titkos_szo[i] = '*';
		}
		else {
			titkos_szo[i] = ' ';
		}
	}
	titkos_szo[length] = '\0';
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
	int rossz_talalatok_szama = 0, Max_talalat, pont=0;
	Max_talalat = strlen(szo) + 3;
	while (rossz_talalatok_szama < Max_talalat) {
		printf("%s", titkos_szo);
		printf("\n\nTippelj egy betut: ");
		tippelt_betu = getch();
		tippelt_betu=toupper(tippelt_betu);
		printf("%c",tippelt_betu);
		if (betu_teszteles(tippelt_betu, szo, titkos_szo) == 0) {
            red();
			printf("\nEz a betu nem talalhato meg a szoban. \n");
            white();
			rossz_talalatok_szama++;
		}
		else {
            green();
			printf("\nSzuper!Kitalaltal egy betut, csak igy tovabb! \n");
            white();
		}
		printf("Meg van %i talalatod.\n", Max_talalat - rossz_talalatok_szama);

		if (strcmp(szo, titkos_szo) == 0) {
			printf("%s\n", szo);
			printf("Ezaz! Kitalaltad!\n");
			pont+= (Max_talalat-rossz_talalatok_szama);
			printf("%i pontod lett\n\n", pont);
			break;
		}
	}
	if (rossz_talalatok_szama == Max_talalat) {
		printf("Vesztettel! 0 pontod van" );
		printf("A szo a kovetketo volt: %s\n", szo);
	}

	return 0;

}


void menu(char szo[20]){
    char a, titkos_szo[20], tippelt_betu;
    bool f = true;
    clrscr();
    while(f){
        purple();
        printf("Jatek szabaly(s)\n\n");
        yellow();
        printf("SZINTEK:\n");
        boldpink();
        printf("   Konnyu(e)\n");
        white();
        printf("   Kozepes(m)\n");
        cyanblue();
        printf("   Nehez(h)\n\n");
        red();
        printf("Kilepes(q)\n");
        white();
        printf("Valassz: \n\n");
        a=getch();
        printf("\n");
        switch(a){
            case 's' :{
                       jatek_szabaly();
                       break;
            }

            case 'e' : {
                       clrscr();
                       szo_beolvasasa_allomanybol("be1.txt", szo);
                       csillagga_alakitas(szo, titkos_szo);
                       betu_betevese_ellenorzese(tippelt_betu, szo, titkos_szo);
                       break;
            }

            case 'm' : {
                       clrscr();
                       szo_beolvasasa_allomanybol("be2.txt", szo);
                       csillagga_alakitas(szo, titkos_szo);
                       betu_betevese_ellenorzese(tippelt_betu, szo, titkos_szo);
                       break;
            }

            case 'h' : {
                       clrscr();
                       szo_beolvasasa_allomanybol("be3.txt", szo);
                       csillagga_alakitas(szo, titkos_szo);
                       betu_betevese_ellenorzese(tippelt_betu, szo, titkos_szo);
                       break;
            }

            case 'q': {
                       clrscr();
                       green();
                       printf("Koszi a jatekot!");
                       white();
                       exit(0);
                       break;
            }
            default :{
                       f=false;
                       break;
            }

        }
    }
}


void jatek_szabaly(){
    printf("                    JATEK SZABALY\n");
    printf("A jatek lenyege, hogy kitalald a csillagok mogott rejtozkodo szot.\n");
    printf("Erre annyi probalkozasod van, mint a szoban levo betuk szama+3.\n");
    printf("Az 'e' betut lenyomva a konnyu palyat valaszthatod ki, 'm' betuvel a kozepes palyat,\n");
    printf("mig a 'h' betuvel a nehezet.");
    printf("A 'q' betuvel kilephetsz a jatekbol.");
    printf("Sok sikert es jo szorakozast!");
    printf("\n\n");
}

void clrscr(){
    system("@cls||clear");
}

void red (){
    printf("\033[1;31m");
}

void yellow(){
    printf("\033[1;33m");
}

void cyanblue(){
    printf("\033[0;36m");
}

void green(){
    printf("\033[0;32m");
}

void purple(){
    printf("\033[0;35m");
}

void boldpink(){
    printf("\033[1;35m");
}

void white(){
    printf("\033[0m");
}
