#include "Functions.c"

int main() {
	char szo[20], titkos_szo[20];
	char tippelt_betu;
	szo_beolvasasa_allomanybol("be1.txt", szo);
	csillagga_alakitas(szo, titkos_szo);
	betu_betevese_ellenorzese(tippelt_betu, szo, titkos_szo);
	///kiiratas(szo);
	///kiiratas(titkos_szo);
	return 0;
}