#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number :- ";
    cin>>n;

    for(int i=1 ; i<=12 ; i++ )
    {
        cout<< n << " x "<< i << " = "<< n*i<<endl;
    }
}

// output is

Enter the number :- 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
5 x 11 = 55
5 x 12 = 60