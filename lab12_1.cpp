#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string>

using namespace std;

string randGrade(){
    string result = "";
    switch(rand()%9){
        case 0:
            result = "A";
            break;
        case 1:
            result = "B+";
            break;
        case 2:
            result = "B";
            break;
        case 3:
            result = "C+";
            break;
        case 4:
            result = "C";
            break;
        case 5:
            result = "D+";
            break;
        case 6:
            result = "D";
            break;
        case 7:
            result = "F";
            break;
        case 8:
            result = "W";
            break;
    }
    return result;
}

int main(){
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << randGrade() << " in this 261102.";

    return 0;
}
