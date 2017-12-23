#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
//---------------------------------
 int rndGenerate();
 int i(0), s;
 int x = rndGenerate();
//---------------------------------
int main()
{

    do
    {
      cout<<"Please guess the number: ";
      cin>>s;
         if (s==x)
         {
            cout<<"Correct! You win."<<endl;
            break;
         }

         if (s>x)
         {
            cout<<"Wrong! Try lower."<<setw(21)<<"Tries left: "<<6-i<<"."<<endl;
         }

         if (s<x)
         {
            cout<<"Wrong! Try higher."<<setw(20)<<"Tries left: "<<6-i<<"."<<endl;
         }
         if (i==6&&s!=x)
         {
            cout<<"You lost."<<endl<<
                  "The number was: "<<x<<endl;
         }
      ++i;
    }while(i<7);
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////
int rndGenerate()
    {
        srand((unsigned)time(0));
        int random_integer = (rand()%100)+1;
        return random_integer;
    }
///////////////////////////////////////////////////////////////////////////////////////////
