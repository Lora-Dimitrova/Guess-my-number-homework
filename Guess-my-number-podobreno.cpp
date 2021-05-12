#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
     srand(time(0));
        cout << "Guess My Number Game\n\n";
    int a,b;
    cout<<"Enter border numbers for your game: ";
    cin>>a>>b;
    int num = rand() % (b - a) + 1;

    int guess=0,br=0;
    do
    {   cout << "Enter a guess between "<<a<<" and "<<b<<": ";
        cin>>guess;br++;
        if (guess == 0) { 
             break;
        } else {
        if (guess > num) { cout<<"Too high!"<<endl;
        }
        else if (guess < num) {
            cout<<"Too low!"<<endl;
        }
        else {
            cout<<"\nCorrect!"<<endl;
        }

    }
    }

    while (guess!=num && guess!=0);
    cout<<"Number of times you tried: "<<br<<endl;



    return 0;
}
