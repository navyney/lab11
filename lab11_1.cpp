#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main(){
    string grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    cout << "You will get " << grade[rand()%9] << " in this 261102.";
    return 0;
}