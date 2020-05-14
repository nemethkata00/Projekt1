#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <stdbool.h>

void szo_beolvasasa_allomanybol(const char* filename, char szo[20]);
void csillagga_alakitas(char szo[20], char titkos_szo[20]);
int betu_teszteles(char tippelt_betu, char titkos_szo[20], char szo[20]);
void betu_betevese_ellenorzese(char tippelt_betu, char szo[20], char titkos_szo[20]);
void kiiratas(char szo[20]);

#endif // !FUNCTIONS_H