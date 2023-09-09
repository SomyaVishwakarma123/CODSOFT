#include <iostream>
using namespace std;
 int main(){
    int number1;
    int number2;

    cout<<"Enter number1: "<<endl;
    cin>>number1;
    cout<<"Enter number2: "<<endl;
    cin>>number2;
    cout<<endl;

    cout<<"1 - Add"<<endl;
    cout<<"2 - Subtract"<<endl;
    cout<<"3 - Divide"<<endl;
    cout<<"4 - Multiply"<<endl;
    cout<<"Enter the operation you want to perform"<<endl;
    int choice;
    cin>>choice;

    if(choice==1){
        cout<<number1 + number2 <<endl;
    }
    else if(choice==2){
        cout<<number1 - number2 <<endl;
    }
    else if(choice==3){
        cout<<number1 / number2 <<endl;
    }
    else if(choice==4){
        cout<<number1 * number2<<endl;
    }
    else{
        cout<<"Invalid choice"<<endl;
    }
    return 0;
 }


