#include "cine.h"

int main()
{
	cine cineApp;
	cineApp.showMenu();
	cineApp.seating("TRANSFORMERS ONE", "10:00 AM", 4000);
	cineApp.seating("TRANSFORMERS ONE", "01:00 PM", 4000);
	cineApp.seating("TRANSFORMERS ONE", "04:00 PM", 4000);
	cineApp.seating("TRANSFORMERS ONE", "07:00 PM", 4000);

	cineApp.seating("THE KILLERS  GAME", "10:00 AM", 3500);
	cineApp.seating("THE KILLERS  GAME", "01:00 PM", 3500);
	cineApp.seating("THE KILLERS  GAME", "04:00 PM", 3500);
	cineApp.seating("THE KILLERS  GAME", "07:00 PM", 3500);

	cineApp.seating("Beetlejuice Beetlejuice", "10:00 AM", 4200);
	cineApp.seating("Beetlejuice Beetlejuice", "01:00 PM", 4200);
	cineApp.seating("Beetlejuice Beetlejuice", "04:00 PM", 4200);
	cineApp.seating("Beetlejuice Beetlejuice", "07:00 PM", 4200);

	

}
	