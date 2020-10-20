#include <iostream>
using namespace std;

int main()
{
    int firstNum;
    int secondNum;
    int thirdNum;
    int fourthNum;
    int fifthNum;
    int sum;

    cout << "Enter First Number:";
    cin >> firstNum;
    cout << "Enter Second Number:";
    cin >> secondNum;
    cout << "Enter Third Number:";
    cin >> thirdNum;
    cout << "Enter Fourth Number:";
    cin >> fourthNum;
    cout << "Enter Fifth Number:";
    cin >> fifthNum;

    int nums[5] = {firstNum, secondNum, thirdNum, fourthNum, fifthNum};

    for (int i = 0; i < 5; i++)
    {
        if (nums[i] % 2 == 0)
        {
            sum += nums[i];
        }
    }
    cout << sum;
}