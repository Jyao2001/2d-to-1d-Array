#include<iostream>

using namespace std;
int main()
{
    int a[3][3];
    int b[9];
    int i=0,j=0,k=0,x=0;
    cout<<"Enter Elements into 3*3 matrix \n";
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
        {
            if(x%3 == 0)
                cout << endl;
            cin>>a[i][j];
            x++;
        }

    cout<<"Matrix entered:  \n";
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

    cout<<endl;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            b[k++]=a[i][j];

    }
    cout<<"1-D Matrix is \n";

    //cout<<endl;
    for(k=0; k<9; k++)
        cout<<b[k]<<" ";
    cout<<endl;


}
