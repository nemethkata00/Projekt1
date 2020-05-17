#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <windows.h>

void szo_beolvasasa_allomanybol(const char* filename, char szo[20]);

void csillagga_alakitas(char szo[20], char titkos_szo[20]);

int betu_teszteles(char tippelt_betu, char titkos_szo[20], char szo[20]);

void betu_betevese_ellenorzese(char tippelt_betu, char szo[20], char titkos_szo[20]);

void menu(char szo[20]);

void jatek_szabaly();

void clrscr();

void red ();

void yellow();

void cyanblue();

void green();

void purple();

void boldpink();

void reset();


///void kiiratas(char szo[20]);

#endif // FUNCTIONS_H_INCLUDED
