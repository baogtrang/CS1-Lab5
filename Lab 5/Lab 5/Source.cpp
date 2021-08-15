//Bao Trang
//Computer Science 1 - Professor Benjamin Shelton
//The program will calculate new prices after discount
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main()
{
	ofstream outFile;
	outFile.open("output.txt");

	double total, discount, newPrice, discountAmount;
	total = discount = newPrice = discountAmount = 0.0;
	int count = 1; //counter for the while loop
	while (count <= 6) {
		cout << "What is the total purchase amount: ";
		cin >> total;
		cout << "\n";

		if (total >= 1000) //trickle down from 1000 is easier 
		{
			discount = 0.5;
		}
		else if (total >= 500)
		{
			discount = 0.4;
		}
		else if (total >= 250)
		{
			discount = 0.3;
		}
		else if (total >= 100)
		{
			discount = 0.2;
		}
		else
		{
			discount = 0.1;
		}

		discountAmount = total * discount;
		newPrice = total - discountAmount;

		outFile << fixed << setprecision(2); //formatting the output to have 2 decimal places

		outFile << left << setw(20) << "Total purchase" << " $ " << right << setw(8) << total << endl;
		outFile << left << setw(20) << "Discount" << " $ " << right << setw(8) << discountAmount << endl;
		outFile << "--------------------- \n";
		outFile << left << setw(20) << "New Price" << " $ " << right << setw(8) << newPrice << endl;
		outFile << "\n";

		count++;

	}
	outFile.close();
	return 0;

}
