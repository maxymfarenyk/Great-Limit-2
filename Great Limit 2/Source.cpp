#include <iostream> 
using namespace std;

int main()

{
    double epsilon;
    cout << "enter epsilon: ";
    cin >> epsilon;

    double e = exp(1.0);
    double n = 0;

    do
    {
        n++;
    } while (abs(pow((1 + 1 / n), n) - e) > epsilon);

    cout << "e: " << e << endl;
    cout << "n: " << n << endl;
    return 0;
}