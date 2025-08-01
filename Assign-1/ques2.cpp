#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Please enter a positive number of elements." << endl;
        return 1;
    }

    vector<int> numbers(n);
    int sum = 0;

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
        sum += numbers[i];
    }

    double average = static_cast<double>(sum) / n;
    cout << "Average: " << average << endl;

    return 0;
}
