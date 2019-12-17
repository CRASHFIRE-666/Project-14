#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout<<"Введите N"<<endl;
    cin>>n;
    vector<int> a(n);
    cout<<"Введите массив"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int d;
    d=a[1]-a[0];
    for (int i=2; i<n; i++)
    {
        if (a[i]-a[i-1]==d)
        {
            continue;
        }
        else
        {
            d=0;
        }
    }
    cout<<d<<endl;
}
