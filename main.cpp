#include <iostream>

using namespace std;

int main() {

int n=0, primo=1, secondo=1, fibonacci=0;

cin>> n;

        if(n<=2){
            cout<<"errore"<<endl;
        }else{
            cout<< "1" << "\n" << "1" << endl;

            for (int i = 2; i < n; ++i) {
                fibonacci=primo+secondo;
                primo=secondo;
                secondo=fibonacci;
                cout<< fibonacci <<endl;
            }
        }

    return 0;
}
