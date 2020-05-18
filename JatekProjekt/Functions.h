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

///A szavak beolvasasa allomanybol file vegeig random.
void szo_beolvasasa_allomanybol(const char* filename, char szo[20]);

///A szo titkositasa(betuk csilagokka alakitasa).
void csillagga_alakitas(char szo[20], char titkos_szo[20]);

///teszteli a betut, amit tippelunk, hogy mar eltalaltuk-e, vagy benne van-e a szoban.
int betu_teszteles(char tippelt_betu, char titkos_szo[20], char szo[20]);

///Teszteli az elozo fuggvent felhasznalva es kiirja, hogy benne van-e a szo vagy nincs, valamint a probalkozasok szamat is.
void betu_betevese_ellenorzese(char tippelt_betu, char szo[20], char titkos_szo[20]);

///Itt valosul meg switch-case-el a jatek menuje.
void menu(char szo[20]);

///Jatek szabaly leirasa.
void jatek_szabaly();

///Kepernyo tartalmanak torlese.
void clrscr();

///piros szin.
void red ();

///sarga szin.
void yellow();

///kek szin.
void cyanblue();

///zold.
void green();

///lila.
void purple();

///sotet rozsaszin.
void boldpink();

///feher.
void white();



#endif // FUNCTIONS_H_INCLUDED
