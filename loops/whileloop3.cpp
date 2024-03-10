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
