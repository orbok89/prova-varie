

#include <iostream>
using namespace std;

void menu() {
	cout << "****menu****" << endl;
	cout << "1.balance" << endl;
	cout << "2.deposit"<<endl;
	cout << "3.withdraw" << endl;
	cout << "4.exit" << endl;
	cout << "************" << endl;
}

int main()
{

    int option, balance=500;
	int money;
	menu();
	do {
		cout << "option " << endl;
		cin >> option;

		switch (option)
		{
		case 1: cout << "you balance is:" << balance; break;
		case 2: cout << "enter amount to deposit";
			 
			cin >> money;
			balance += money; break;
		case 3: cout << "enter amount to withdraw";
			 
			cin >> money;
			if (balance - money < 0) {
				cout << "not money";
			}
			else {
				balance -= money; break;
			}

		}
	} while (option != 4);
}

