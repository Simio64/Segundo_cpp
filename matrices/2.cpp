#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int x[3][3],f,c,n=0;
	for(c=0;c<3;c++)
	{
		for(f=0;f<3;f++)
		{
			cout<<"ingrese el dato ";
			cin>>x[c][f];
		}
	}
	cout<<" "<<endl;
	for(c=0;c<3;c++)
	{
		for(f=0;f<3;f++)
		{
			cout<<x[c][f];
			n=n+x[c][f];
		}
		cout<<endl;
	}
	cout<<"la sumatoria es "<<n;
}
