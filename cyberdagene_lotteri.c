#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "serialCom.h"

void openBox(){
	int i = serialCom();
	printf("> Du gjettet riktig! Boksen er nå åpen!\n");

}

int main(){
	system("clear");
	// Lager Buffer og vinnertall
	srand(time(NULL));
	int i_hemmelig = rand() % 99999999;
	char buffer[16];

	// Printer ut banner
	printf("  /(((((((((/                                                                                                           \n  /((                                                                                                                   \n  /((                                                                                                                   \n  /((                                                                                                                   \n  /((       ,@@@@@@@@@                (@@&((#                             @@             #@@       (%%&@@               \n  /((       ,@@,    (@@   (@@@@@&  #@@@@@@@@@  *@@@@@@   @@@@@@@@   *@@@@&@@   #@@@@@@   #@@@@@@@     /@@      @@@@@@   \n  /((       ,@@,     @@( @@(,,,(@@    @@@     @@&,,,,@@  @@@   @@% &@@   *@@      ,*@@%  #@@   ,@@*   /@@    &@@,,,,@@, \n  /((       ,@@,    @@@  @@*          @@@     @@(        @@@   @@% @@@   ,@@  @@@,  @@%  #@@    @@/   /@@    @@@        \n  /((       ,@@@@@@@@,    &@@@@@@  #@@@@@@@@   %@@@@@@*  @@@   @@%  &@@@@@@@  (@@@@@@@@( #@@@@@@@* %@@@@@@@@, #@@@@@@(  \n  /((                                                                                                                   \n  /((                                                                                                                   \n  /(((((((((/                                                                                                          \n  \nv1.0 \n\n// notat: denne versjonen er muligens sårbar og SKAL IKKE BRUKES PÅ CYBERDAGENE!!! \n// Som vanlig kan alle versjoner lastes ned fra https://github.com/Defendable/Cyberdagene2024, både kildekode og ferdig kompilert\n// Bruk v1.1, IKKE BRUK v1.0 siden den har en sårbarhet som studentene kan utnytte for å vinne uten å gjette riktig tall -Pål\n\n\n> Velkommen til Defendable sitt lotteri! For å spille vennligst skriv inn svaret på spørsmålet under. Har du rett, vinner du prisen!\n> Spørsmål: Hvilket tall tenker jeg på? (mellom 0 og 99999999)\n> ");

	// Henter gjett
	gets(buffer);
	printf("> Du gjettet: %s\n", buffer);

	//Sjekker om det var riktig
	int cmp;
	sscanf(buffer, "%d", &cmp);
	if (cmp == i_hemmelig) {
		openBox();
	} else {
		printf("> Beklager, men det var feil. Riktig svar var %d\n", i_hemmelig);
	}
	return 0;
}


