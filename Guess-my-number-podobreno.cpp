#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
     srand(time(0));
        cout << "Guess My Number Game\n\n";
    int a = 0;
    int b = 0;
    cout<<"Enter border numbers for your game: ";
    cin>>a;
    cin>>b;
    int num = rand() % (b - a + 1) + a;
    while (a <= 0 || b <= 0 || a >= b) {
       cout<<"Invalid data\n";
       cout<<"Enter border numbers for your game: ";
       cin>>a>>b;
    }

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

