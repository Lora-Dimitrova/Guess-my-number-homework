#include <iostream> //включване на библиоотеката, която показва какъв тип данни е използван в кода
#include <cstdlib>
#include <ctime>
using namespace std;

int main () //въвежда основната част (тялото) на програмата
{
    srand(time(0)); //seed random number generator
    int num = rand() % 100 + 1; // random number between 1 and 100
    cout << "Guess My Number Game\n\n"; //програмата извежда Guess My Number Game и еследващото, което ще бъде изведено, че е два реда надолу

    int guess = 0; //въвежда се променлива guess
    while (guess != num) { //
        cout << "Enter a guess between 1 and 100 : "; //извежда Enter a guess between 1 and 100 :
        cin >> guess; //изчаква потребителя да въведе число за променливата guess
        if (guess > num) { //условието на оператора if  е, въведеното от потребителя число да е по-голямо от променлвата num
            cout << "Too high!\n\n"; //когато условието е изпулнено, програмата ще изведе Too high
        }
        else if (guess < num) //ако условието от първия оператор if не е изпълнено, се въвежда нов оператор if, чието условие е променливата guess да е по-малка променливата num
            {
                cout << "Too low!\n\n"; //ако условието на втория оператор е изпълнено програмата ще изведе Too low и следващото изведено нещо че е два реда надолу
            }
        else { //ако и второто условие не е изпълнено, значи птребителят е познал числото
            cout << "\nCorrect! You got it in "; //програмата ще изведе Correct! You got it in
        }
    }

    return 0;
}
