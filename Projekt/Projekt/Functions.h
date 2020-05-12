#pragma once
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include <stdio.h>
#include <stdbool.h>

void createArray(char** tomb, int n);
void ReadArrayfromFile(const char* filename, char** tomb, int* n);
void PrintArray(char* tomb, int n);

#endif // !FUNCTIONS_H