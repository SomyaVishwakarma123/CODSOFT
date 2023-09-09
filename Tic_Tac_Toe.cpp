#include <iostream>
using namespace std;

char space[3][3]={{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row;
int column;
char token = 'X';
bool tie=false;
string n1="";
string n2="";

void functionOne(){      
    

    
   

    cout<< "    |      |   \n";
    cout<< "  "<<space[0][0]<<" |  "<<space[0][1]<<"   | "<<space[0][2]<<"  \n";
    cout<< "____|______|___\n";
    cout<< "    |      |   \n";
    cout<< "  "<<space[1][0]<<" |  "<<space[1][1]<<"   | "<<space[1][2]<<"  \n";
    cout<< "____|______|___\n";
    cout<< "    |      |   \n";
    cout<< "  "<<space[2][0]<<" |  "<<space[2][1]<<"   | "<<space[2][2]<<"  \n";
    cout<< "    |      |   \n";
}

void functionTwo(){           

    int digit;

    if(token=='X')
    {
        cout<<n1<<" Enter the position where you want x ";
        cin>>digit;
    }

    if(token=='0')
    {
        cout<<n2<<" Enter the position where you want 0 ";
        cin>>digit;
    }

    if(digit==1)
    {
        row=0;
        column=0;
    }
    if(digit==2)
    {
        row=0;
        column=1;
    }
    if(digit==3)
    {
        row=0;
        column=2;
    }
    if(digit==4)
    {
        row=1;
        column=0;
    }
    if(digit==5)
    {
        row=1;
        column=1;
    }
    if(digit==6)
    {
        row=1;
        column=2;
    }
    if(digit==7)
    {
        row=2;
        column=0;
    }
    if(digit==8)
    {
        row=2;
        column=1;
    }
    if(digit==9)
    {
        row=2;
        column=2;
    }
    else if(digit<1 || digit>9){
        cout<<"Invalid choice !"<<endl;
    }

    if(token=='X' && space[row][column] !='x' && space[row][column] != '0')
{
    space[row][column]='X';
    token='0';
}
else if(token=='0' && space[row][column] !='x' && space[row][column] != '0')
{
    space[row][column]='0';
    token='X';
}
else{
    cout<<"No empty space!"<<endl;
    functionTwo();
}
functionOne();
}

bool functionThree()   
{
    for(int i=0;i<3;i++)
    {
        if(space[i][0]==space[i][1] && space[i][0]==space[i][2] || space[0][i]==space[1][i] && space[0][i]==space[2][i])
        return true;
    }
    if(space[0][0]==space[1][1] && space[1][1]==space[2][2] || space[0][2]==space[1][1] && space[1][1]==space[2][0])
    {
        return true;
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(space[i][j] != 'x' && space[i][j] != '0')
            {
                return false;
            }
        }
    }
    tie=true;
    return false;
}

int main()
{

    cout<<"Enter name of player 1: \n";
    getline(cin, n1);
    cout<<"Enter name of player 2: \n";
    getline(cin, n2);
    cout<<n1<< " is player1 \n";
    cout<<n2<< " is player2 \n";

    while(!functionThree())
    {
        functionOne();
        functionTwo();
        functionThree();
    }

    if(token == 'X' && tie == false)
    {
        cout<<n2<<" Won!!!"<<endl;
    }
    else if(token == '0' && tie == false)
    {
        cout<<n1<<" Won!!!"<<endl;
    }
    else
    {
        cout<<"Game draw!!"<<endl;
    }
}
