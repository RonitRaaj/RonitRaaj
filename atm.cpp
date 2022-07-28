#include<iostream>
using namespace std;

class bank{
    private:
      int account_type, amount , totalamnt = 500;
      int account_no;
    public:
      void welcome(){
        cout<<"*******Welcome******\n";
        cout<<"Enter your Account number\n";
        cin>>account_no;
        cout<<"Enter your Account type\n 1. Savings Account\n 2. Current Account\n 3. Salary Account\n ";
        cin>>account_type;
        cout<<"\n\n";
      }
      void display(){
        cout<<"Account Number : "<<account_no<<endl;
        switch (account_type)
        {
        case 1:
              cout<<"Savings Account\n";
            break;
        case 2:
              cout<<"Current Account\n";
            break;
        case 3:
              cout<<"Salary Account\n";
            break;
        
        }

      }
      void banking(){

        cout<<"\n\n\n\n press 1 to withdraw\n press 2 to deposit\n press 3 to check balance\n press 0 to exit\n";
      }
      void deposit(){
        cout<<"Enter the amount to deposit\n";
        cin>>amount;
        totalamnt = totalamnt + amount;
        amount = 0;
      }
      void withdraw(){
        cout<<"Enter the amount to withdraw\n";
        cin>>amount;
        totalamnt = totalamnt - amount;
        amount = 0;
      }
      void balance(){
        cout<<"Your account balance is:\n"<<totalamnt<<endl;
      }
};

int main(){
    bank b;
    int choice;
    b.welcome();
    b.display();
    for (int i = 0; i < 100; i++)
    {
        b.banking();
        cin>>choice;
        if (choice == 1)
        {
            b.withdraw();
            b.balance();
            continue;
        }
        if (choice == 2)
        {
            b.deposit();
            b.balance();
            continue;
        }
        if (choice == 3)
        {
            b.balance();
            continue;
        }
        if (choice == 0)
        {
            break;
        }
    }
    cout<<"******* Thank You ********"<<endl;    

}

