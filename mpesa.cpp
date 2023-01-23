//C++ program to implement the M-PESA approach
#include<iostream>
#include<cctype>
#include<cstdlib>
#include<conio.h>
using namespace std;
//declaring all the functions we need in this program
void withdrawmoney(void);
void depositmoney(void);
void sendmoney(void);
void buyairtime(void);
void checkbalance(void);
void mainmenu(void);
//fuction to withdraw money
void withdrawmoney(void)

{
	system("CLS");
	cout<<"*******M-PESA  MONEY WITHDRAWAL*******\n\n";
	int balance = 240000, finalBalance, transactionfee;
	char agentNumber[6];
	cout<<"ENTER THE AGENT NUMBER: ";
	cin>>agentNumber;
	int amountToWithdraw;
	cout<<"ENTER THE AMOUNT YOU WISH TO WITHDRAW: ";
	cin>>amountToWithdraw;
	int pin;
	cout<<"ENTER YOUR MPESA PIN: ";
	cin>>pin;
	const int PIN =1234;
if(pin==PIN){
	if(amountToWithdraw<=balance){
	if(amountToWithdraw>=50||amountToWithdraw<=300000)
	{
		if(amountToWithdraw>=1&&amountToWithdraw<50) transactionfee=0;
		else if(amountToWithdraw>=50&&amountToWithdraw<=100) transactionfee=10;
		else if(amountToWithdraw>100&&amountToWithdraw<=500) transactionfee=27;
		else if(amountToWithdraw>500&&amountToWithdraw<=2500) transactionfee=28;
		else if(amountToWithdraw>2500&&amountToWithdraw<=3500) transactionfee=50;
		else if(amountToWithdraw>3500&&amountToWithdraw<=5000) transactionfee=67;
		else if(amountToWithdraw>5000&&amountToWithdraw<=7500) transactionfee=84;
		else if(amountToWithdraw>7500&&amountToWithdraw<=10000) transactionfee=112;
		else if(amountToWithdraw>=10000&&amountToWithdraw<=15000) transactionfee=162;
		else if(amountToWithdraw>15000&&amountToWithdraw<=20000) transactionfee=180;
		else if(amountToWithdraw>20000&&amountToWithdraw<=35000) transactionfee=191;
		else if(amountToWithdraw>35000&&amountToWithdraw<=50000) transactionfee=270;
		else if(amountToWithdraw>50000&&amountToWithdraw<=70000) transactionfee=300;
		else
		{
		cout<<"\n\n========Transaction failed!=========\n You can only withdraw a minimum of 50 and a maximum of 150000 per transaction."<<endl;
		cout<<"\n********Kindly press enter to go back to main menu and try again********";
		getch();
		mainmenu();
		}
		}
		finalBalance = (balance-(amountToWithdraw+transactionfee));
		cout<<"...........Transaction successful........";
		cout<<"\n\nTransaction code: "<<rand()<<"\t"<<rand()<<"\t"<<"Agent number:\t"<<agentNumber<<"\n"<<"Amount withdrawn: "<<amountToWithdraw<<"\t";
		cout<<"NEW M-PESA balance: "<<finalBalance<<"\t Transaction charges: "<<transactionfee;
		cout<<"\n----------Thank you for using M-PESA services--------";
		cout<<"\n******Kindly Press enter to go to main menu******";
		getch();
		mainmenu();
	}
}
else
{
	cout<<"\n\n=========Transaction failed=======\n";
	cout<<"=========Invalid password========\n";
	cout<<"***********Kindly Press enter to go to main menu*********";
	getch();
	mainmenu();
}
}
//function to deposit money
void depositmoney(void)
{
	system("CLS");
	cout<<"*****M-PESA MONEY DEPOSIT*******\n\n";
	int balance = 100;
	int agentNum;
	cout<<"ENTER THE AGENT NUMBER:";
	cin>>agentNum;
	int amountToDeposit;
	cout<<"ENTER THE AMOUNT YOU WANT TO DEPOSIT: ";
	cin>>amountToDeposit;
	const int PIN = 88888;
	int pin;
	cout<<"ENTER AGENT PIN: ";
	cin>>pin;
	if(pin==PIN){
	balance+=amountToDeposit;
	if(balance<=300000)
	{
		cout<<"\n\n.......Transaction successful........\n";
		cout<<"Transaction ID: "<<rand()<<rand()<<"\tAgent number: "<<agentNum;
		cout<<"\n Amount deposited: "<<amountToDeposit<<"\t NEW M-PESA balance: "<<balance;
		cout<<"\n------Thank you for using mpesa services--------\n";
		cout<<"*******Press enter to go to main menu******";
		getch();
		mainmenu();
	}
	else
	{
		cout<<"\n\n========Transaction failed==========\n";
		cout<<"Your account maximum mpesa balance should be 300000\n";
		cout<<"******Kindly press enter to go main menu and try again********";
		getch();
		mainmenu();
	}
	}
	else
	{
		cout<<"\n\n========Transaction failed=========\n";
		cout<<"----------The agent pin entered is incorrect-------\n";
		cout<<"*********Kindly press enter to go to main menu**********";
		getch();
		mainmenu();
	}	
}
//function to send money
void sendmoney(void)
{
	system("CLS");
	cout<<"********M-PESA MONEY TRANSFER********\n\n";
	int balance=1200;
	int person;
	cout<<"ENTER THE NUMBER OF THE PERSON YOU WANT TO SEND MONEY TO: ";
	cin>>person;
	int amount;
	cout<<"ENTER THE AMOUNT YOU WISH TO SEND: ";
	cin>>amount;
	const int PIN = 700000;
	int pin;
	pin;
	cout<<"ENTER YOUR PIN: ";
	cin>>pin;
	if(pin==PIN)
	{
	int sendcost;
	if(amount>0&&amount<=100)sendcost=0;
	else if(amount>100&&amount<=500)sendcost=11;
	else if(amount>500&&amount<=1000)sendcost=15;
	else if(amount>1000&&amount<=1500)sendcost=26;
	else if(amount>1500&&amount<=2500)sendcost=41;
	else if(amount>2500&&amount<=3500)sendcost=56;
	else if(amount>3500&&amount<=5000)sendcost=61;
	else if(amount>5000&&amount<=7500)sendcost=77;
	else if(amount>7500&&amount<=10000)sendcost=87;
	else if(amount>10000&&amount<=15000)sendcost=97;
	else if(amount>15000&&amount<=20000)sendcost=102;
	else if(amount>20000&&amount<=70000)sendcost=105;
	balance=balance-(amount+sendcost);
	cout<<"\n\n******Transaction successful********\n";
	cout<<"Transaction ID: "<<rand()<<rand()<<"  You've sent "<<amount<<"  to "<<person;
	cout<<"\n NEW M-PESA balance: "<<balance<<"\t Transaction fee: "<<sendcost;
	cout<<"\n.....Thank you for using M-PESA services.....\n";
	cout<<"--------Kindly press enter to goto main menu----------";
	getch();
	mainmenu();
	}
	else
	{
		cout<<"\n\n=======Transaction failed========\n";
		cout<<"------You have insufficient balance or the pin entered is invalid!!!------\n*******Kindly, press enter to go back to main menu*********";
		getch();
		mainmenu();
	}	
}
//function to buy airtime
void buyairtime(void)
{
	system("CLS");
	cout<<"*******M-PESA BUY AIRTIME******\n\n";
	int balance = 4567;
	int pin;
	const int PIN = 1234;
	int airtime;
	cout<<"ENTER THE AMOUNT OF AIRTIME YOU WANT TO BUY: ";
	cin>>airtime;
	cout<<"ENTER MPESA PIN: ";
	cin>>pin;
	if(pin==PIN)
	{
		balance-=airtime;
		cout<<"\n\n*****Transaction successful*******\n";
		cout<<"Transaction ID: "<<rand()<<rand()<<"\t You've bought "<<airtime<<" airtime\n";
		cout<<"Your NEW M-PESA balance is "<<balance;
		cout<<"\n...Thank you for using M-PESA services....";
		cout<<"-----Kindly press enter to go to main menu---------";
		getch();
		mainmenu();
	}
	else
	{
		cout<<"\n\n=========Transaction failed=======\n";
		cout<<"=======Incorrect pin!=======\n******Kindly press enter to go to main menu******";
		getch();
		mainmenu();
	}
}
//function to check balance
void checkbalance(void)
{
	system("CLS");
	cout<<"********M-PESA CHECKBALANCE**********\n\n";
	int pin;
	cout<<"ENTER YOUR PIN: ";
	cin>>pin;
	int balance = 4567;
	const int PIN = 1234;
	if(pin==PIN)
	{
		cout<<"******Transaction successful*******\n";
		cout<<"Transaction ID: "<<rand()<<rand()<<"  Current M-PESA balance is "<<balance;
		cout<<"\n....Thank you for using M-PESA services....\n";
		cout<<"*******Kindly press enter to go to the main menu********";
		getch();
		mainmenu();
	}
	else
	{
		cout<<"\n\n========Transaction failed======\n";
		cout<<"=======Incorrect pin!=======\n********Kindly press enter to go to main menu********";
		getch();
		mainmenu();
	}
}
//function to display the main menu
void mainmenu(void)
{
	system("CLS");
	cout<<"\n\n**********MPESA MAIN MENU*********"<<endl<<endl;
	cout<<"1...WITHDRAW CASH"<<endl;
	cout<<"2...DEPOSIT MONEY"<<endl;
	cout<<"3...SEND MONEY"<<endl;
	cout<<"4...BUY AIRTIME"<<endl;
	cout<<"5...CHECK BALANCE"<<endl;
	cout<<"6...EXIT"<<endl<<endl;
	int option;
	cout<<"ENTER YOUR CHOICE.."<<endl;
	cin>>option;
	getch();
	switch(option){
		case 1:
			withdrawmoney(); break;
		case 2:
			depositmoney();  break;
		case 3:
			sendmoney();  break;
		case 4:
			buyairtime(); break;
		case 5:
			checkbalance(); break;
		case 6:
			system("CLS");
			cout<<"........................exiting M-PESA.........................\n\n";
			cout<<"&&&&&&&&&&&&&& Goodbye dear customer &&&&&&&&&&\n";
			cout<<"-------Thank you for using M-PESA services------\n";
			cout<<"############# Feel free to use M-PESA services anytime anywhere ##########";
			exit(0); break;	
			getch();			
	}
}
	
//Driver code
int main()
{
	int rand();
	mainmenu();

	return 0;
}

