#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int cal[21],n;
	int i;
	for(i=1;i<=20;i++)
	{
		cout<<"ingrese la calificacion #"<<i<<" ";
		cin>>cal[i];	
	}
	i=0;
	for(i=1;i<=20;i++)
	{
		if(i==1 || i==3 || i==7)
		{
			cout<<"el numero en el arreglo "<<i<<" es "<<cal[i]<<endl;
		}
	}
}
