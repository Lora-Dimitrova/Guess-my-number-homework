#include <iostream> //��������� �� �������������, ����� ������� ����� ��� ����� � ��������� � ����
#include <cstdlib>
#include <ctime>
using namespace std;

int main () //������� ��������� ���� (������) �� ����������
{
    srand(time(0)); //seed random number generator
    int num = rand() % 100 + 1; // random number between 1 and 100
    cout << "Guess My Number Game\n\n"; //���������� ������� Guess My Number Game � �����������, ����� �� ���� ��������, �� � ��� ���� ������

    int guess = 0; //������� �� ���������� guess
    while (guess != num) { //
        cout << "Enter a guess between 1 and 100 : "; //������� Enter a guess between 1 and 100 :
        cin >> guess; //������� ����������� �� ������ ����� �� ������������ guess
        if (guess > num) { //��������� �� ��������� if  �, ���������� �� ����������� ����� �� � ��-������ �� ����������� num
            cout << "Too high!\n\n"; //������ ��������� � ���������, ���������� �� ������ Too high
        }
        else if (guess < num) //��� ��������� �� ������ �������� if �� � ���������, �� ������� ��� �������� if, ����� ������� � ������������ guess �� � ��-����� ������������ num
            {
                cout << "Too low!\n\n"; //��� ��������� �� ������ �������� � ��������� ���������� �� ������ Too low � ���������� �������� ���� �� � ��� ���� ������
            }
        else { //��� � ������� ������� �� � ���������, ����� ����������� � ������ �������
            cout << "\nCorrect! You got it in "; //���������� �� ������ Correct! You got it in
        }
    }

    return 0;
}
