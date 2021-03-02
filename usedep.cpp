#include <iostream>
#include <string>
#include "deposit.h"

int main()
{
	std::cout << "Initialize class object" << std::endl;
	Deposit people_1 = Deposit();
	people_1.Show();
	Deposit people_2 ("Alexey Mysak", "qwE2eW22399", 3000.5);
	people_2.Show();
	people_2.Delete(3100);
	people_2.Add(3000);
	people_2.Show();
	Deposit people_3 = Deposit("Vsevolod Burmaka", "ffFF222", 9032.3);
	people_3.Show();
	Deposit people_4 = Deposit("Lupa", "fAdqe2fd3", -3);
	people_4.Show();

	std::cout << "Done!" << std::endl;

	return 0;
}