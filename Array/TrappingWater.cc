#include <iostream>
using namespace std;
void trap(int hight[], int n)
{
    int leftMax[20000], rightMax[20000];
    leftMax[0] = hight[0];
    rightMax[n - 1] = hight[n - 1];
    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(leftMax[i - 1], hight[i - 1]);
        cout << leftMax[i] << ",";
    }
    cout << endl;
    for (int i = n - 2; i >= 0; i--)
    { // loop in decreasing order ,n=2 because of rightMax[n-1]=hight[n-1]
        rightMax[i] = max(rightMax[i + 1], hight[i + 1]);
        cout << rightMax[i] << ",";
    }

    int Water = 0;
    for (int i = 0; i < n; i++)
    {
        int currwater = min(leftMax[i], rightMax[i]) - hight[i];
        if (currwater > 0)
        {
            Water += currwater;
        }
    }
    cout << endl;
    cout <<"water trapped : "<< Water << " ";
}
int main()
{
    int hight[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(hight) / sizeof(int);
    trap(hight, n);
    return 0;
}