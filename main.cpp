#include <iostream>

using namespace std;

int main()
{
    int cont2 = 1, cont = 1, a = 0;
    while (cont <= 4){
        cin >> a;
        if (a == 1){
            cont = 5;
        }else{
            cont2++;
        }
        cont++;
    }
    cout << cont2 <<endl;
    return 0;
}
