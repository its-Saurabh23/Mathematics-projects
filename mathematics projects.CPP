#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	
int num;
int t,f,p,n=0,remain=0,drome,temp,r,fact=1,l1,l2,max,sum = 0;
int pr,rate ,time ,SI;

do
{
clrscr();

cout<<"\n*********************** MENU ***************************"<<endl<<endl<<endl;
cout<<"PRESS 1 TO CHECK NUMBER IS EVEN OR ODD:- "<<endl;
cout<<"PRESS 2 FOR DETERMINE FACTORIAL:- "<<endl;
cout<<"PRESS 3 TO CHECK NUMBER IS PRIME OR NOT:- "<<endl;
cout<<"PRESS 4 TO CHECK NUMBER IS PALINDROME:- "<<endl;
cout<<"PRESS 5 TO FIND LCM:- "<<endl;
cout<<"PRESS 6 TO FIND SIMPLE INTEREST (SI):- "<<endl;
cout<<"PRESS 7 TO EXIT:- "<<endl<<endl;
cout<<"PRESS ANY NUMBER TO DETERMINE ANY OPERATION AND THEN ENTER:- "<<endl;
cin>>num;

switch(num)
{
	case 1:  //even odd..
	{
	cout<<"Enter a number:-"<<endl;
	cin>>t;
    if(t%2==0)
      {
	     cout<<"Number is Even"<<endl<<endl;
      }
    else
    {
	     cout<<"Number is Odd"<<endl<<endl;
    }
       break;
	}

	case 2:    //factorial..
	{
		cout<<"Enter any number for factorial"<<endl;
		cin>>f;
		for(int i =1; i<=f; i++)
	{

	fact=fact*i;
	}
		cout<<"FACTORIAL OF GIVEN NUMBER IS = "<<fact<<endl<<endl;
		break;
	}

	case 3:   //prime...
	{
		cout<<"ENTER THE NUMBER TO CHECK PRIME OR  NOT"<<endl;
		cin>>p;
	       n = p/2;
		for(int i =2; i<p-1; i++)
	{
		if(p%i == 0)
	{
		cout<<"NUMBER IS NOT PRIME "<<endl<<endl;
		remain =1;
		break;
	}
	}
	if(remain == 0)
	{
		cout<<"NUMBER IS PRIME"<<endl<<endl;
	}
	break;
	}

	case 4:  //PALINDROME
	{
	cout<<"ENTER THE NUMBER FOR PALINDROME"<<endl<<endl;
		cin>>drome;
		temp = drome;
		while(drome>0)
	{
		r=drome%10;
		sum=(sum*10)+r;
		drome = drome/10;
	}
	if(temp == sum)
	{
		cout<<"NUMBER IS PALINDROME"<<endl<<endl;
	}
	else
	{
		cout<<"NUMBER IS NOT PALINDROME"<<endl<<endl;
	}
	break;
	}

	case 5:          //.TO GET LCM
	{
		cout<<"ENTER TWO POSITIVE INTEGERS TO GET LCM"<<endl;
		cout<<"ENTER FIRST NUMBER"<<endl;
	    cin>>l1;
	    cout<<"ENTER SECOND NUMBER"<<endl;
	    cin>>l2;
		for(max=1;max<l1*l2;max++)
	{
		if(max%l1 == 0 && max%l2 == 0)
		break;
	}
		cout<<"LCM OF "<<l1<<" & "<<l2<<" is : "<<max<<endl<<endl;
	break;
	}

	case 6:   // PRINCIPLE Rs. (SI)
		{
			cout<<"ENTER THE PRINCIPLE Rs. (SI)"<<endl;
			cin>>pr;
			cout<<"ENTER THE RATE %% (SI)"<<endl;
			cin>>rate;
			cout<<"ENTER THE TIME IN YEARS (SI)"<<endl;
			cin>>time;
			SI = (pr*rate*time)/100;
			cout<<"SIMPLE INTEREST (SI) IS = "<<SI<<endl<<endl;
	    break;
		}

        case 7:
	{
		cout<<"EXIT"<<endl;
		break;
	}
	default:
	    {
			cout<<"INVALID CHOICE !!!!"<<endl<< "PLEASE SELECT THE NUMBER BETWEEN 1 TO 5";
	    }
}
getch();
}

while(num!=7);
return 0;
}
