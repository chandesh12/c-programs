// print number from 1 to n using while loop//
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        cout << i << " " << endl;
        i = i + 1;
    }
}

// sum of number from 1 to n//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "value of sum is" << sum << endl;
}

// sum of all even numbers//
#include <iostream>
    using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    int sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << "value of sum of even numer" << sum << endl;
}

// prime numer or not//
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "not prime " << i << endl;
        }
        else
        {
            cout << "prime " << i << endl;
        }
        i = i + 1;
    }
}
