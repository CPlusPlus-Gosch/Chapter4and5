#include <iostream>
#include<string>
#include <math.h>
#include <random>


 int main()
 {
	 int i = 0;
	 int choice;
	 int total = 0;
	 while (i < 1)
	 {
		 std::cout << "Would you like to roll. YES - 1, NO - 2\n";
		 std::cin >> choice;
		 if (choice == 1)
		 {
			 std::random_device generator;
			 std::uniform_int_distribution<int> distribution(1, 6);
			 int dice_roll = distribution(generator);
			 total += dice_roll;
			 std::cout << total << "\n";
		 }
		 else
		 {
			 i++;
		 }
	 }
	 std::cout << total << "\n";

	 return 0;
 }

 int delgadosTacos()
 {
	 double tacos = 0.99;
	 double burritos = 1.99;
	 double enchiladas = 2.99;
	 double tostadas = 1.50;
	 double drink = 0.99;
	 double churro = 1.25;
	 double supremeBurrito = 4.50;
	 double potatoOllas = 1.99;
	 double tacosOrdered, burritosOrdered, enchiladasOrder, tostadasOrdered, drinksOrdered, churroOrdered, supremeBurritoOrdered, potatoOllasOrdered;
	 double total;
	 std::string choice;


	 std::cout << "********Welcome to Delgados Tacos***********\n\n\n\n\n\n" << std::endl;
	 std::cout << "  TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT " << std::endl;
	 std::cout << "  T    -----------------------         T " << std::endl;
	 std::cout << "  T    |         OO           |         T " << std::endl;
	 std::cout << "  T    |        O--O          |         T " << std::endl;
	 std::cout << "  T    |         OO           |         T " << std::endl;
	 std::cout << "  T    ----------|------------         TTTTTTT " << std::endl;
	 std::cout << "  T                                    T     T" << std::endl;
	 std::cout << "  T                                    T     T" << std::endl;
	 std::cout << "  T    OO                              T  OO T" << std::endl;
	 std::cout << "  TTTTO  OTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTO  OT " << std::endl;
	 std::cout << "       OO                                 OO " << std::endl;


	 std::cout << "Taco: " << tacos << "\n";
	 std::cout << "Burrito: " << burritos << "\n";
	 std::cout << "Enchilada: " << enchiladas << "\n";
	 std::cout << "Tostada: " << tostadas << "\n";
	 std::cout << "Drink: " << drink << "\n";
	 std::cout << "Churro: " << churro << "\n";
	 std::cout << "Supreme Burrito: " << supremeBurrito << "\n";
	 std::cout << "Potato Ollas: " << potatoOllas << "\n";

	 std::cout << "Enter a menu item to buy>>> ";
	 std::cin >> choice;

	 if (choice == "Taco") {
		 std::cout << "How many tacos?";
		 std::cin >> tacosOrdered;
		 total = (tacos * tacosOrdered);
	 }
	 else if (choice == "Burrito") {
		 std::cout << "How many burritos?";
		 std::cin >> burritosOrdered;
		 total = (burritos * burritosOrdered);
	 }
	 else if (choice == "Enchilada") {
		 std::cout << "How many enchiladas?";
		 std::cin >> enchiladasOrder;
		 total = (enchiladas * enchiladasOrder);
	 }
	 else if (choice == "Tostada") {
		 std::cout << "How many tostadas?";
		 std::cin >> tostadasOrdered;
		 total = (tostadas * tostadasOrdered);
	 }
	 else if (choice == "Drink") {
		 std::cout << "How many drinks?";
		 std::cin >> drinksOrdered;
		 total = (drink * drinksOrdered);
	 }
	 else if (choice == "Churro") {
		 std::cout << "How many churros?";
		 std::cin >> churroOrdered;
		 total = (churro * churroOrdered);
	 }
	 else if (choice == "Supreme Burrito") {
		 std::cout << "How many supreme burritos?";
		 std::cin >> supremeBurritoOrdered;
		 total = (supremeBurrito * supremeBurritoOrdered);
	 }
	 else if (choice == "Potato Ollas") {
		 std::cout << "How many potato ollas?";
		 std::cin >> potatoOllasOrdered;
		 total = potatoOllas * potatoOllasOrdered;
	 }
	 else {
		 total = 0;
	 }

	 std::cout << "Your total is " << total;

	 return 0;
 }

 int lakeViewHotel()
 {
	 int serviceCharge = 35;
	 int i = 0;
	 int roomBill = 100;
	 int choice;
	 double phoneCharge = 0.25;
	 int phoneBill;
	 double total = 0.0;

	 while (i < 1)
	 {
		 std::cout << "Would you like to stay the night? Yes - 1, No - 2\n";
		 std::cin >> choice;
		 if (choice == 1)
		 {
			 total += roomBill;
			 std::cout << "Would you like to use room service? Yes - 1, No - 2\n";
			 std::cin >> choice;
			 if (choice == 1)
			 {
				 total += serviceCharge;
			 }
			 std::cout << "Would you like to use the phone? Yes - 1, No - 2\n";
			 std::cin >> choice;
			 if (choice == 1)
			 {
				 std::cout << "How many minutes will you use the phone?\n";
				 std::cin >> phoneBill;
				 total += phoneBill * phoneCharge;
			 }
		 }
		 else
		 {
			 i++;
		 }
	 }
	 std::cout << "Your total is " << total;
	 return 0;
 }

 int triangle()
 {
	 double sideA;
	 double sideB;
	 double sideC;
	 double perimeter;
	 double area;
	 int i = 0;
	 int choice;

	 while (i < 1)
	 {
		 std::cout << "What kind of triangle: Equilateral - 1, Right - 2, or QUIT - 3\n";
		 std::cin >> choice;
		 if (choice == 1) {
			 std::cout << "Enter side A: >>>\n";
			 std::cin >> sideA;
			 std::cout << "Enter side B: >>>\n";
			 std::cin >> sideB;
			 if (sideA != sideB)
			 {
				 std::cout << "Not possible, try again.\n";
			 }
			 else if (sideA == sideB)
			 {
				 sideC = sideA;
				 perimeter = sideA + sideB + sideC;
				 area = (sqrt(3) / 4) * (sideA * sideA);
				 std::cout << "Side C = " << sideC << "\nThe perimeter = " << perimeter << "\nThe area = " << area << "\n";
			 }
		 }
		 else if (choice == 2)
		 {
			 std::cout << "Enter side A: >>>\n";
			 std::cin >> sideA;
			 std::cout << "Enter side B: >>>\n";
			 std::cin >> sideB;
			 sideC = sqrt((sideA * sideA) + (sideB * sideB));
			 perimeter = sideA + sideB + sideC;
			 area = (sideA * sideB) / 2;
			 std::cout << "Side C = " << sideC << "\nThe perimeter = " << perimeter << "\nThe area = " << area << "\n";
		 }
		 else
		 {
			 i++;
		 }
	 }
	 return 0;
 }

 int pizzaPalor()
 {
	 double pepperoni = 0.99;
	 double sausage = 1.10;
	 double ham = 2.30;
	 double olives = 0.70;
	 double large = 15.99;
	 double medium = 12.99;
	 double small = 9.99;
	 double total = 0.0;
	 int i = 0;
	 int choice;

	 while (i < 1)
	 {
		 std::cout << "Would you like a pizza? YES - 1, NO - 2\n";
		 std::cin >> choice;
		 if (choice == 1)
		 {
			 std::cout << "Large: 15.99 - 1, Medium: 12.99 - 2, Small: 9.99 - 3\n";
			 std::cin >> choice;
			 if (choice == 1)
			 {
				 int j = 0;
				 total += large;
				 while (j < 1)
				 {
					 std::cout << "Pepperoni: 0.99 - 1, Sausage: 1.10 - 2, Ham: 2.30 - 3, Olives: 0.70 - 4, or QUIT - 5\n";
					 std::cin >> choice;
					 if (choice == 1)
					 {
						 total += pepperoni;
					 }
					 else if (choice == 2)
					 {
						 total += sausage;
					 }
					 else if (choice == 3)
					 {
						 total += ham;
					 }
					 else if (choice == 4)
					 {
						 total += olives;
					 }
					 else
					 {
						 j++;
					 }
				 }
			 }
			 else if (choice == 2)
			 {
				 int j = 0;
				 total += medium;
				 while (j < 1)
				 {
					 std::cout << "Pepperoni: 0.99 - 1, Sausage: 1.10 - 2, Ham: 2.30 - 3, Olives: 0.70 - 4, or QUIT - 5\n";
					 std::cin >> choice;
					 if (choice == 1)
					 {
						 total += pepperoni;
					 }
					 else if (choice == 2)
					 {
						 total += sausage;
					 }
					 else if (choice == 3)
					 {
						 total += ham;
					 }
					 else if (choice == 4)
					 {
						 total += olives;
					 }
					 else
					 {
						 j++;
					 }
				 }
			 }
			 else if (choice == 3)
			 {
				 int j = 0;
				 total += small;
				 while (j < 1)
				 {
					 std::cout << "Pepperoni: 0.99 - 1, Sausage: 1.10 - 2, Ham: 2.30 - 3, Olives: 0.70 - 4, or QUIT - 5\n";
					 std::cin >> choice;
					 if (choice == 1)
					 {
						 total += pepperoni;
					 }
					 else if (choice == 2)
					 {
						 total += sausage;
					 }
					 else if (choice == 3)
					 {
						 total += ham;
					 }
					 else if (choice == 4)
					 {
						 total += olives;
					 }
					 else
					 {
						 j++;
					 }
				 }
			 }
		 }
		 else
		 {
			 i++;
		 }
		 std::cout << "Your total: " << total << "\n";
	 }
	 return 0;
 }