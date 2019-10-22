#include<iostream>
using namespace std;
class prime{
public:
    int n,i,c=0;
    void getnum()
    {
        cout<<"\nEnter any Positive number to check: ";
        cin>>n;

        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
            cout<<"Your Entered Number is prime number\n";
        else
            cout<<"your entered number isn't prime number";


    }
};
int main()
{
    int n;
    prime p;
    cout<<"Prime Number Finder\n\n\n";
    cout<<"\nwanna check prime number? press 1: ";
    cin>>n;
    while(n==1)
    {
   p.getnum();
   cout<<"Again Wanna check? press 1: ";
   cin>>n;
    }
    return 0;
}
