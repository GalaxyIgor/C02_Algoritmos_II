#include<iostream>
using namespace std;

int hash_aux(int k, int m)
{
    int hash_value = k % m;
    if (hash_value < 0) 
    {
        hash_value += m;
    }
    return hash_value;
}
int main ()
{
    int k,m;

    while(true)
    {
        cin >> k >> m;
        if(k == 0 && m == 0)
        {
            break;
        }
        cout << hash_aux(k,m) << endl;
    }
    return 0;
}
/*#include <iostream>
using namespace std;

int hash_aux(int k, int m) {
    int result = k % m;
    if (result < 0) {
        result += m;
    }
    return result;
}

int main() {
    int k, m;
    while (cin >> k >> m) {
        if (k == 0 && m == 0) {
            break;
        }
        cout << hash_aux(k, m) << endl;
    }
    return 0;
}
*/