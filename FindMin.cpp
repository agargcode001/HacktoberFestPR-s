#include <iostream>

using namespace std ;
int main()
{
	int n;
	cout<<"Enter number ";
	cin>>n;
	int A[n+1];
	int min = 999999999;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		if(min > A[i])
		{
			min = A[i];
		}
	}
	cout<<min<<endl;

}