//1.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++) {
        cout << i << endl;
    }

    return 0;
}

//2.
#include <iostream>
using namespace std;
int main() {
    int day;
    cin >> day;
    
    if (day == 1)
    {
        cout << "PONIEDZIALEK" << endl;
    }
    else if (day == 2)
    {
        cout << "WTOREK" << endl;
    }
    else if (day == 3)
    {
        cout << "SRODA" << endl;
    }
    else if (day == 4)
    {
        cout << "CZWARTEK" << endl;
    }
    else if (day == 5)
    {
        cout << "PIATEK" << endl;
    }
    else if (day == 6)
    {
        cout << "SOBOTA" << endl;
    }
    else if (day == 7)
    {
        cout << "NIEDZIELA" << endl;
    }
    else
    {
        cout << "ERROR" << endl;
    }

    return 0;
}

//3.
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    
    cin >> a >> b >> c;
    
    cout << a << " " << b << " " << c << endl;
    cout << "a " << a << endl;
    cout << "b " << b << endl;
    cout << "c " << c << endl;

    return 0;
}

//4.
#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    cout << "(Ha)^" << a << endl;

    return 0;
}

//5.


//6.


//7.
#include <iostream>
using namespace std;

int main() {
    long long a , b, c, obwod;
    cin >> a;
    cin >> b;
    cin >> c;
    
    obwod = a + b + c;
    
    cout << obwod << endl;
    return 0;
}

//8.
#include <iostream>
using namespace std;

int main() {
    int a , b, c;
    cin >> a;
    cin >> b;
    
    c = b - a;
    
    cout << c << endl;
    
    return 0;
}
