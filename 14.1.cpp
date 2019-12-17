#include <iostream>
#include <vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    cout<<"Введите N"<<endl;
    int n,k,l;
    cin>>n;
    vector<float> a(n);
    cout<<"Введите элементы массива"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<"Введите K и L"<<endl;
    cin>>k>>l;
    float sum=0;
    for (int i=k; i<=l; i++)
    {
        sum+=a[i];
    }
    cout<<sum/(l-k+1)<<endl;
    return 0;
}
