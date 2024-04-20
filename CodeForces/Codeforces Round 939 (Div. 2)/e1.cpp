#include<bits/stdc++.h>
using namespace std;
int t,n,a[200010];
void solute()
{
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	while(1)
	{
		int bj=0;
		for(int i=1;i<n;i++)
		{
			if(a[i+1]!=0&&a[i]!=0) bj=1;
			a[i+1]=max(0,a[i+1]-a[i]);
		}
		if(a[1]!=0&&a[n]!=0) bj=1;
		a[1]=max(0,a[1]-a[n]);
		if(bj==0) break;
		for(int i=1;i<=n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<"***\n";
	}
	int cnt=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]!=0) cnt++;
	}
	cout<<cnt<<"\n";
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}
int main()
{
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		solute();
	}
	return 0;
}