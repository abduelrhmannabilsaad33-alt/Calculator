#include<iostream>
using namespace std;
int main() {
	int number1, number2;
	char ope,con;

	
	do {
	cout << "====Calculator====" << endl;
	cout << "Enter Number one " << endl;
	cin >> number1;
	cout << "Enter the opearation do " << endl;
	cin >> ope;
	cout << "Enter Number two " << endl;
	cin >> number2;

	switch (ope) {
	case '+':
		cout << number1 + number2 << endl;
		break;
	case '-':
		cout << number1 - number2 << endl;
		break;
	case '*':
		cout << number1 * number2 << endl;
		break;
	case '/':
		if (number2 == 0) {
			cout << "Cannot divide by zero" << endl;
			break;
		}
		else {
		cout << double(number1) / number2 << endl;
		break;
		}
	case '%':
		if (number2 == 0) {
			cout << "Cannot divide by zero" << endl;
			break;
		}
		else {
		cout << number1 % number2 << endl;
		break;
		}
	default:
		cout << "Invalid value " << endl;
	}
	cout << "Do you want to continue ? (y / n)"<<endl;
	cin >> con;
	} while (con != 'y');
	return 0;


}