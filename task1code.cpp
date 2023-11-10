#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int ran = rand() % 100 + 1;
    cout<<"welcome to guess the number game"<<endl;
    cout<<"i am going to choose a number from 1 - 100 so take a guess"<<endl;
    int userno=0;
    cout<<"what do u think is in my mind"<<endl;
    while(ran != userno)
    {

        cin>>userno;
        if(ran<userno)
        {
            cout<<"its too high from the number in my mind"<<endl;
            cout<<"try again dear"<<endl;

        }
        else if(ran > userno)
        {
            cout<<"its too low from the number in my mind"<<endl;
            cout<<"try again dear"<<endl;
        }
        else
        {
            cout<<"congrats!!!! you guess the correct number";
            return 0;
        }

    }
}

