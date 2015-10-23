#include <iostream>
#include <cstdio>

using namespace std;

double balance=100.00;
int pass;
int choice1;



int validatePassword(int);
double getBalance();
void Deposit(double);
void Withdrawal(double);
void choice();

int main()
{
	cout <<"   **KV BANK BERHAD** " <<endl;
	cout <<"   **AUTOMATED TELLER MACHINE** " <<endl;
	cout <<" KV Bank Berhad Main Menu " <<endl;
	cout <<" 1. Balance Enquiry" <<endl;
	cout <<" 2. Deposit" <<endl;
	cout <<" 3. Withdrawal" <<endl;
	cout <<" 4. Quit" <<endl;
	cin>>choice1;
	choice();
	return 0;
}

void choice()
{


	if (choice1==1)
		getBalance();
	else if (choice1==2)
		Deposit(balance);
	else if (choice1==3)
		Withdrawal(balance);
	else if (choice1==4)

		cout <<"Quit" <<endl;
	else
		cout <<"Exit!" <<endl;
}

int validatePassword(int)
{
	int Password=24680;
	int pass;

	for (int i=0;i<3;i++)
	{
		cout <<" Please enter your password " <<endl;
		cin >> pass;

		if (Password==24680)
		{cout <<"1 = continue!" <<endl;
		}
		else
		{
			cout <<"0 = try again!" <<endl;
		}
	}
	return 0;
}

double getBalance()
{
	cout <<"The amount in your account is $" <<balance<<endl;

	return 0;
}

void Deposit(double)
{
	double deposit;

	cout <<"Enter amount of your deposit :$ " <<endl;
	cin >>deposit;
	balance = balance + deposit;
	cout <<"Your new balance is $ " <<endl;
}

void Withdrawal(double)
{
	double withdrawal;

	cout <<"Enter amount of your withdrawal :$ " <<endl;
	cin >>withdrawal;
	balance = balance + withdrawal;
	cout <<"Your new balance is $ " <<endl;
}


