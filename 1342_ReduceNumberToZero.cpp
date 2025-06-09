#include <iostream>
using namespace std;

int ReduceNumber (int num);

int main () {

    int UI;

    cout <<"Enter number to reduce : ";
    cin >> UI;

    cout <<"Steps: " << ReduceNumber(UI) << endl;

    return 0;
}

int ReduceNumber(int num) {

    int steps = 0;

    while (num > 0)
    {
        if ( (num % 2) == 0 ){
            num = num / 2 ;
        } else {
            num -= 1 ;
        }

        steps += 1;
    }
    
    return steps;
};