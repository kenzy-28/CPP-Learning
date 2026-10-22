#include <iostream>
using namespace std;

void showbalance(double balance){
    
    cout<<"Your balance is " << balance << endl;
    }
double deposit(){
    double amount;
    cout<<"Enter amount to deposit " <<endl;
    cin>> amount;
    return amount;
    }
double withdraw(){


    double amount;
    cout<<"Enter amount to withdraw " <<endl;
    cin>> amount;
    return amount;
}   

int main() {
    int choice;
    double balance=0;
    do{
        cout<<"Enter to the banking System"<<endl;
        cout<<"Current Balance is :"<< balance<<endl;
        cout<<"1. Show Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
    
        switch(choice){
            case 1:
            showbalance(balance);
            break;
            case 2:
              balance += deposit();
              cout<<"Deposited successfully"<<endl;
              showbalance(balance); 
              break;
            case 3:
                
                if(withdraw() > balance){
                    cout<<"Insufficient balance. Please try again."<<endl;
                } 
                else{
                    balance -= withdraw();
                }

                cout<<"Withdrawn successfully"<<endl;
                showbalance(balance);   
                break;
            case 4:
                cout<<"Exiting the system"<<endl;
                break; 
            default:
                cout<<"Invalid choice. Please try again."<<endl;        
          
                      }
    }while(choice!=4);
    return 0;   
}