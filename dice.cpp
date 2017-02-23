#include <iostream>
#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

// Written by sn0w

int main () {
	
	
	int roll;

	//Get Seed
	srand (time(NULL));
	
	// Pick random number.

	roll = rand() % 6 + 1;

	// Prints ascii die depending on the number above.

	if (roll == 1) {

		std::cout << R"(
        	+---------+
        	|         |
        	|         |
        	|    .    |
        	|         |
        	|         |
        	+---------+
        )" ;
			
	}

	if (roll == 2) {

		std::cout << R"(
        	+---------+
        	|         |
        	|  .      |
        	|         |
        	|      .  |
        	|         |
        	+---------+
        )" ;
			
	}

	if (roll == 3) {

		std::cout << R"(
        	+---------+
        	|         |
        	|  .      |
        	|    .    |
        	|      .  |
        	|         |
        	+---------+
        )" ;
			
	}

	if (roll == 4) {

		std::cout << R"(
        	+---------+
        	|         |
        	|  .   .  |
        	|         |
        	|  .   .  |
        	|         |
        	+---------+
        )" ;
			
	}

	if (roll == 5) {

		std::cout << R"(
        	+---------+
        	|         |
        	|  .   .  |
        	|    .    |
        	|  .   .  |
        	|         |
        	+---------+
        )" ;
			
	}

	if (roll == 6) {

		std::cout << R"(
        	+---------+
        	|         |
        	| .  .  . |
        	|         |
        	| .  .  . |
        	|         |
        	+---------+
        )" ;
			
	}
}
