//Homework 6 answer for the vending machine




//assume input1,input2,input5,input10 are number of coins that input to the vendin machine by customer
//assume change is the balance
//assume n1,n2,n5,n10 are the number of coins that the machine should give to the customer as balance
//assume r1,r2,r5,r10 are the rest of the balance 
//in variable is for select the product
//yn variable is to confirm client wants to continue the process

#include <iostream>
using namespace std;

int main()

{
	int productA,productB,productC,productD,in,sum=0,input1,input2,input5,input10,change,productPrice,n1,n2,n5,n10,r1,r2,r5,r10;
	int b1,b2,b5,b10;
//	 assume that 100 of each coin are preloaded
	b1=100;
	b2=100;
	b5=100;
	b10=100;
	
	int yn=1;
	
	while(b1!=0 || b2!=0 || b5!=0 || b10!=0 && yn!=0)
	{
		
	productA=10;
	productB=20;
	productC=30;
	productD=40;
	
	cout<<"Product A "<<": "<<"enter 1"<<endl;
	cout<<"Product B "<<": "<<"enter 2"<<endl;
	cout<<"Product C "<<": "<<"enter 3"<<endl;
	cout<<"Product D "<<": "<<"enter 4"<<endl;
	
	
	
	cout<<"Enter the number for your desired product: "<<endl;
	cin>>in;//getting the input from buyer to decide which product is going to buy
	if(in==1)
	{
		cout<<"The desired product number is: "<<in<<endl;
		cout<<"Prodcut is: "<<productA<<endl;
		productPrice=productA;
	}
		
	if(in==2)
	{
			cout<<"The desired product number is: "<<in<<endl;
			cout<<"Prodcut is: "<<productB<<endl;
			productPrice=productB;	
	}
	if(in==3)
	{
			cout<<"The desired product number is: "<<in<<endl;
			cout<<"Prodcut is: "<<productC<<endl;
			productPrice=productC;
	}
	if(in==4)
	{
			cout<<"The desired product number is: "<<in<<endl;
			cout<<"Prodcut is: "<<productD<<endl;
			productPrice=productD;	
	}
			
	cout<<"Plz enter the payment through the slot(Remember: Only coins 1,2,5 & 10 are acceptable)"<<endl;
	
	
	cout<<"Number of 1 coins: ";
	cin>>input1;
	cout<<"Number of 2 coins: ";
	cin>>input2;
	cout<<"Number of 5 coins: ";
	cin>>input5;
	cout<<"Number of 10 coins: ";
	cin>>input10;
	
	b10=b10+input10;
	b5=b5+input5;
	b2=b2+input2;
	b1=b1+input1;
	
	sum = (1*input1)+(2*input2)+(5*input5)+(10*input10);//calculating the total amount that the buyer input
	
	change = sum-productPrice;//calculating the change that machine should give to the buyer
	if(change<0)
	{
		cout<<"Your Money is Insuffient.... "<<endl;
	}
	else
	{
			cout<<"Your balance is: "<<change<<"...Get your balance throuh the coin slot:::"<<endl;
	
	n10=change/10;r10=change%10;//how many 10 coins and how much is the rest
	n5=r10/5;r5=r10%5;//how many 5 coins and how much is the rest
	b5=b5-n5;
	n2=r5/2;r2=r5%2;//how many 2 coins and how much is the rest
	b2=b2-n2;
	n1=r2/1;r1=r2%1;//how many 1 coins and how much is the rest
	b1=b1-n1;
	if(n10>0)
	{
		cout<<"Rs.10: "<<n10<<endl;	
	}
	if(n5>0)
	{
		cout<<"Rs.5: "<<n5<<endl;
	}
	if(n2>0)
	{
		cout<<"Rs.2: "<<n2<<endl;
	}
	if(n1>0)
	{
		cout<<"Rs.1: "<<n1<<endl;
	}
	
	
	cout<<"Thank You!"<<endl;
	cout<<"Do You want anything to buy? "<<endl;
	cout<<"If yes please enter 1 "<<endl;
	cout<<"If no please enter 0 "<<endl;
	int yn;
	cin>>yn;
	if(yn==0)
	break;
	}

	
	}


	cout<<"Thank you for the order!!! "<<endl;

	return 0;
}


