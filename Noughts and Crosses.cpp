#include <bits/stdc++.h>
using namespace std;
int main()
{
    string player1,player2,winner="No One";
    int x,y,turn(0);
    char arr[3][3]={{'.','.','.'},{'.','.','.'},{'.','.','.'}},re;

    cout<<setw(7)<<"Hello, and welcome to Noughts and Crosses!"<<endl;
    cout<<setw(0)<<"Please enter the names of the 2 players(x)and(o): ";

    cin>>player1>>player2;
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<setw(5)<<arr[i][j];
        }
        cout<<endl;
    }
    for (int i=0; i<9;i++)
    {
        if (turn % 2 == 0) { cout << "It's " << player1 << "'s turn!  | "; }
        if (turn % 2 == 1) { cout << "It's " << player2 << "'s turn!  | "; }
        cout << "Please enter the x and y co-ordinates: ";
        cin >> y >> x;
        if ((arr[abs(x-2)][y] == 'x') ||(arr[abs(x-2)][y] == 'o')||x>2||y>2) {cout<<endl<<"Invalid Input!"<<endl<<endl; i--; continue;}
        if (turn%2==0){arr[abs(x-2)][y]='x';}
        if (turn%2==1){arr[abs(x-2)][y]='o';}
        turn++;
        for (int k=0; k<3; k++)
        {
            for (int j=0; j<3; j++)
            {
                cout<<setw(5)<<arr[k][j];
            }
            cout<<endl;
        }

        //Horizonalx
        if (arr[0][0]=='x'&&arr[0][1]=='x'&&arr[0][2]=='x'){winner=player1; break;}
        if (arr[1][0]=='x'&&arr[1][1]=='x'&&arr[1][2]=='x'){winner=player1; break;}
        if (arr[2][0]=='x'&&arr[2][1]=='x'&&arr[2][2]=='x'){winner=player1; break;}
        //Verticalx
        if (arr[0][0]=='x'&&arr[1][0]=='x'&&arr[2][0]=='x'){winner=player1; break;}
        if (arr[0][1]=='x'&&arr[1][1]=='x'&&arr[2][1]=='x'){winner=player1; break;}
        if (arr[0][2]=='x'&&arr[1][2]=='x'&&arr[2][2]=='x'){winner=player1; break;}
        //Diagonalsx
        if (arr[0][0]=='x'&&arr[1][1]=='x'&&arr[2][2]=='x'){winner=player1; break;}
        if (arr[0][2]=='x'&&arr[1][1]=='x'&&arr[2][0]=='x'){winner=player1; break;}


        //Horizonalo
        if (arr[0][0]=='o'&&arr[0][1]=='o'&&arr[0][2]=='o'){winner=player2; break;}
        if (arr[1][0]=='o'&&arr[1][1]=='o'&&arr[1][2]=='o'){winner=player2; break;}
        if (arr[2][0]=='o'&&arr[2][1]=='o'&&arr[2][2]=='o'){winner=player2; break;}
        //Verticalo
        if (arr[0][0]=='o'&&arr[1][0]=='o'&&arr[2][0]=='o'){winner=player2; break;}
        if (arr[0][1]=='o'&&arr[1][1]=='o'&&arr[2][1]=='o'){winner=player2; break;}
        if (arr[0][2]=='o'&&arr[1][2]=='o'&&arr[2][2]=='o'){winner=player2; break;}
        //Diagonalso
        if (arr[0][0]=='o'&&arr[1][1]=='o'&&arr[2][2]=='o'){winner=player2; break;}
        if (arr[0][2]=='o'&&arr[1][1]=='o'&&arr[2][0]=='o'){winner=player2; break;}
    }
    if (winner!="No One"){cout<<"The winner is "<<winner<<endl<<setw(5)<<"Congrats!"<<endl;}
    if (winner=="No One"){cout<<"It's a tie!"<<endl;}
    cout<<"Would you like to play another game?(y/n): ";
    retry:
    cin>>re;
    if (re=='y'){return main();}
    if (re=='n'){cout<<"Okay :( Goodbye!"; return 0;}
    else {cout<<"Invalid input! Try Again: "; goto retry;}
}
