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
    int min=2147483647;
    for (int i=0; i<n; i++)
    {
        if ((i%2==0) and (a[i]<min))
        {
            min=a[i];
        }
    }
    cout<<"Минимум="<<min<<endl;
    return 0;
}
