#include<iostream>
#include<string>
using namespace std;
class BankAccount
{
	private:
		int accountNumber;
		string accountHolder;
		double balance;
		int Totalaccount=0;
		public:
			BankAccount(double accnumber )
			{
				accountNumber=accnumber;
			
				balance=0;
			}
			void deposit()
			{
				double d;
				cout<<"Enter deposit ammount "<<endl;
				cin>>d;
				balance+=d;
			}
			void withdraw()
			{   
			    double w;
			    cout<<"Enter withdrawl ammount "<<endl;
			    cin>>w;
			    if(w<=500)
			    {
			    	cout<<"Low Balance";
				}
				else
				{
					balance=balance-w;
				}
			}
			void chkbalance()
			{
				cout<<endl;
				cout<<"Your balance is "<<balance<<endl;
			}
			void getaccnumber()
			{
				cout<<"Account Number is"<<accountNumber<<endl;
			}
			void creatacc()
			{
				Totalaccount++;
				cout<<"Enter your name"<<endl;
				cin>>accountHolder;
				cout<<"Enter ammount to diposit"<<endl;
				cin>>balance;
			}
			void display()
			{   
				cout<<"Welcome to BOP"<<endl;
				cout<<"Name : "<<accountHolder<<endl;
				cout<<"Your Acc No is :"<<accountNumber<<endl;
				cout<<"Total Balanc is "<<balance<<endl;
			}
			
};
  int main()
  {
  	BankAccount b(2341);
  	int Choice;
  	for(int i=0;i<=8;i++)
  	{
  		
	  
  	cout<<"Bank Management system \n choose any:"<<endl;
  	cout<<"1.Create account"<<endl;
  	cout<<"2.Display Details"<<endl;
  	cout<<"3.Current Balance "<<endl;
  	cout<<"4.Deposit"<<endl;
  	cout<<"5.Withdrawl"<<endl;
  	cout<<"6.Exit Menu"<<endl;
  	cout<<"Enter choice"<<endl;
  	cin>>Choice;

  	
	  
  	switch(Choice)
  	{
  		case 1:
  		b.creatacc();
		  break;
		  case 2:
		  b.display();
		  break;
		  case 3:
		  b.chkbalance();
		  break;
		  case 4:
		  b.deposit();
		  break;
		  case 5:
		  b.withdraw();
		  break;
		  case 6:
		  	exit;
		  default :
		  cout<<"\n Invalid choice"<<endl;	
	  }
}
	  return 0;
  }
