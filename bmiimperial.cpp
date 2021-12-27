#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weight;
    double height;
    double bmi;

    cout << "Please enter weight in pounds: ";
    cin >> weight;
    weight *= 0.453592;
    cout << "Please enter height in inches: ";
    cin >> height;
    height *= 0.0254;
    bmi = weight / (height * height);
    cout << "BMI is: " << fixed << setprecision(2) << bmi << endl;

    return 0;
}