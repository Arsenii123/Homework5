

#include <iostream>
using namespace std;
int main()
{
//-1 -
//-2
	int number;
	cout << "Print your number:";
	cin >> number;
	int one = number / 100000;
	int two = (number-one*100000) / 10000;
	int three= (number - (one*100000+two*10000)) / 1000;
	int four = (number - (one * 100000 + two * 10000+three*1000)) / 100;
	int five = (number - (one * 100000 + two * 10000 + three * 1000+four * 100)) / 10;
	int six  = (number - (one * 100000 + two * 10000 + three * 1000 + four * 100+five*10)) / 1;
	if (one + two + three == four + five + six) {
		cout << "Lucky number\n";
	}
	else {
		cout << "Just number\n";
	}
	//-3
	int num1;
	int num2;
	int choice;
	cout << "1: -\n" << "2: +\n" << "3: *\n" << "4: /\n" << "\n";
	cin >> choice;
	cout << "Number1:";
	cin >> num1;
	cout << "Number2:";
	cin >> num2;
	switch (choice) {
	case 1:
		cout << num1 << "-" << num2 << "=" << num1 - num2 << "\n";

	case 2:
		cout << num1 << "+" << num2 << "=" << num1 + num2 << "\n";
	case 3:
		cout << num1 << "*" << num2 << "=" << num1 * num2 << "\n";

	case 4:
		cout << num1 << "/" << num2 << "=" << num1 / num2 << "\n";
	}
    //-4
	double number3;
	cout << "Print your number:";
	cin >> number3;
	if (number3 < 100 && number3 > 1) {
		cout << "The number is in diapason of  100\n";

	}
	else if (number3 > number3 * 1.0) {
		cout << "Number is double\n";
	}
	//-5
	srand(time(0));
	string question;
	int answer = rand() % 3;
	cout << "Write your question:\n";
	cin >> question;
	cout << question <<"\n";
	if (answer == 1) {
		cout << "Yes";
	}
	else if (answer == 2) {
		cout << "No";
	}
	else if (answer == 3) {
		cout <<" Maybe";
	}

}


