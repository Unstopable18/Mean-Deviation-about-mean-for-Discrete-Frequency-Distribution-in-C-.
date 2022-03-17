#include<iostream>
#include<cmath> 
using namespace std;
int main()
{
    int n, i;
    float xarr[50],farr[50],p1[50],p2[50],p3[50],armean,fxar=0, fsum=0,xfsum=0,md;
    cout<<"*******************************************************";
    cout<<"\nEnter Total No. of Elements = \t";
    cin>>n;
    cout<<"\nEnter "<<n<<" Number of Elements: \n";
    for(i=0; i<n; i++)
    {
        cin>>xarr[i]; 
    }
    cout<<"\nEnter "<<n<<" Number of Frequency Elements: \n";
    for(i=0; i<n; i++)
    {
        cin>>farr[i];
        fsum = fsum+farr[i];
    }
    cout<<"\nSum of Frequency Elements ="<<fsum<<"\n";
    for(i=0; i<n; i++)
    {
        xfsum=xfsum+(xarr[i]*farr[i]);
        armean=xfsum/fsum;
    }
    cout<<"*******************************************************";
    cout<<"\nArithmetic Mean is Found to be = "<<armean<<"\n";
    cout<<"*******************************************************";
    for(i=0;i<n;i++)
    {
        p1[i]=xarr[i]-armean;
        p2[i]=abs(p1[i]);
        p3[i] = farr[i]*p3[i];
        fxar=fxar+p3[i];
        md=fxar/fsum;
    }
    cout<<"\nMean Deviation @ Mean is Found to be = "<< md << endl;
    cout<<"*******************************************************";
    return 0;
}