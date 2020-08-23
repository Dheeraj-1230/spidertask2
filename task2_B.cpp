#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long n,q;
	cin>>n>>q;
	long long *arr=new long long[n+1];
	for(long long i=0;i<=n;i++)
	arr[i]=i;
	while(q--)
	{
		long long s,e,nu;
		cin>>s>>e>>nu;
		for(long long i=s;i<=e;i++)
		arr[i]+=nu;
//		for(int i=0;i<=n)
	}
	sort(arr,arr+n+1);
	cout<<arr[n];
	return 0;
}
