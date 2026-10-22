#include <iostream>
#include <ctime>
using namespace std;


int main() {
    int i;
    int choice;
   do{
     cout<< "**** Welcome to Stone Paper Scissors Game ****"<<endl;
     srand(time(NULL));
     cout<< "1.Stone"<<endl;
     cout<< "2.Paper"<<endl;
     cout<< "3.Scissors"<<endl;
     cin >> choice;
     if(choice<1 || choice>3){
        cout<< "Invalid choice"<<endl;
         }
   }while(choice<1 || choice>3);
    i= rand()%3+1;
    switch(i){
        case 1:
            cout<< "Computer chose Stone"<<endl;
          
                 if (choice==1){
                    cout<< "Draw"<<endl;
                    break;
                 }
                 else if (choice==2){
                    cout<< "You Win"<<endl;
                    break;
                 }   
                 else if (choice==3){
                    cout<< "Computer Wins"<<endl;
                    break;
                 }
                  
            
        case 2:
        cout<< "Computer chose Paper"<<endl;
            
                 if (choice==1){
                    cout<< "Computer Wins"<<endl;
                    break;
                 }
                 else if (choice==2){
                    cout<< "Draw"<<endl;
                    break;
                 }   
                 else if (choice==3){
                    cout<< "You Win"<<endl;
                    break;
                 }
                    
                
        case 3:
        cout<< "Computer choses Scissor"<<endl;
            
                 if (choice==1){
                    cout<< "You Win"<<endl;
                    break;
                 }
                 else if (choice==2){
                    cout<< "Computer Wins"<<endl;
                    break;
                 }   
                 else if (choice==3){
                    cout<< "Draw"<<endl;
                    break;
                 }
                              
               }    

        
            }
    

   
   
