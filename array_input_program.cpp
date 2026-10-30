#include <iostream>
#include <string>
using namespace std;

int main() {
    int size;
    int choice;
    do{
    cout<<"Enter the size of the array ";
        cin>>size;
    if (size <= 0) {
    cout << "Invalid array size!" << '\n';   
    }
    }while(size<=0);
    do{
       cout<< "Enter whether you want to enter integer or string"<<'\n';
        cout<<"1. Integer "<<'\n';
        cout<<"2. String"<<'\n';
        cout<<"Choice: ";
        cin>>choice ;
        if(choice<1 || choice>2){
            cout<<"**** Invalid input ****"<<'\n';

        }
        
    }while(choice<1 || choice>2);
    if(choice==1){
        int ar[size];
        int j;
        for(int i  =0;i<size;i++){
            cout<<"Enter the element to be added at "<<i<<" index ";
            cin>>j;
            ar[i]=j;
           

             }
             cout<<"The elements added by user is/are"<<'\n';
              for(int i=0;i<size ; i++){
                 
                 cout <<ar[i]<<'\n';
        }
    }
    else {
        
        string ar[size];
        string j;
        for(int i  =0;i<size;i++){
            cout<<"Enter the element to  be added at"<<i<<" index ";
            cin>>j;
            ar[i]=j;
             

             }
             cout<<"The elements added by user is/are"<<'\n';
             for(int i=0;i<size ; i++){
                 
                 cout <<ar[i]<<'\n';
        }

    }
   
    cout<<"The elements are added successfully";
    }  
 

    









