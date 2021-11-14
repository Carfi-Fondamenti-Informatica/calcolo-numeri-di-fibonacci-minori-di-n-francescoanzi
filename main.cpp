#include <iostream>
using namespace std;
int main() {
int n=0, cont=1, serie=0, primo=1, secondo=1, terzo=0 ;

        cin >> n ;
         cont++;
                if (n<=2){
                    cout << "errore";
                }else{
                    cout << "1" << endl;
                    cout << "1" << endl;
                        for (cont = 2; cont < n; cont++) {
                                terzo = primo + secondo;
                                cout << terzo << endl;
                                primo = secondo;
                                secondo = terzo;


                            }


    }

        return 0;
}
