
#include <iostream>
using namespace std;
void toh(int x,int y,int z,int n)
{
    if(n>=1)
    {
    toh(x,z,y,n-1);
    cout<<"Move disk "<<n<<" from "<<x<<" to "<<z<<"\n";
     toh(y,x,z,n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter the number of disk: ";
    cin>>n;
    toh(1,2,3,n);
    return 0;
}
