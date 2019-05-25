#include "Header.h"


int main() {
	quit = false;
	while (!quit) {
		srand(time(NULL));
		cpchose = rand() % 3 + 1;
		std::cout << "Rock, paper, or scissors?" << std::endl;
		std::cin >> choice;

		choice1 = choice;
		if (choice1.compare("Rock") == 0) {
			chose = 1;
			

		}
		 if (choice1.compare("Paper")) {

			chose = 2;

		}
		 if (choice1.compare("Scissors")) {

			chose = 3;

		}
			if (chose != cpchose) {
				switch (chose) {
				case 1:
					if (cpchose == 2) {
						std::cout << "You lost" << std::endl;
						quit = true;
					}
					if (cpchose == 3) {
						std::cout << "You won!" << std::endl;
						
					}
					break;
				case 2:
					if (cpchose == 1) {
						
						std::cout << "You won!" << std::endl;

					}
					if (cpchose == 3) {
						
						std::cout << "You lost" << std::endl;
						quit = true;

					}
					break;
				case 3:
					if (cpchose == 1) {
						std::cout << "You lost" << std::endl;
						quit = true;
					
					}
					if (cpchose == 2) {
					
						std::cout << "You won!" << std::endl;

					}
					
					break;
				}
				
			}	
			if (chose == cpchose) {
				std::cout << "Tie try again" << std::endl;
				
			}
		

	
	}
	return 0;
}