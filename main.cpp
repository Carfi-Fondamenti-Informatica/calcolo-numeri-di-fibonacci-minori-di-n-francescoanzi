#include <iostream>
using namespace std;
int main() {
    int n=0, primo=1, secondo=1, terzo=0, cont=0 ;

    cin >> n ;
    if (n <=0) {
        return 0;
    }
    else {
        cout << "1" << endl;
        cout << "1" << endl;
        for (cont = 2; cont < n; cont++) {
            terzo = primo + secondo;
            primo = secondo;
            secondo = terzo;
            if (terzo<=n) {
                cout << terzo << endl;
            }
            else{
                return 0;
            }

        }
    }
    }




