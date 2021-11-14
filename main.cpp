#include <iostream>

using namespace std;

int main() {

    int n=0, primo=1, secondo=1, fibonacci=0;

    cin>> n;
    if (n<=0){
        return 0;
    }else{

        cout<< "1" << "\n" << "1" << endl;

        for (int i = 2; i > 0; ++i) {
            fibonacci=primo+secondo;
            primo=secondo;
            secondo=fibonacci;
            if(fibonacci<=n){
                cout<< fibonacci <<endl;
            }else{
                break;
            }
        }

    }

    return 0;
}
