#include<bits/stdc++.h>
using namespace std;
int t,n;
void solute(){
	cin>>n;
	if(n==1)
	{
		cout<<"1 1\n1 1 1\n"; return;
	}
	long long  ans=0;
	for(int i=1;i<=n;i++)
	{
		ans+=i*(2*i-1);
	}
	cout<<ans<<" ";
	cout<<2*n-1<<"\n";
	for(int i=2;i<=n;i++)
	{
		cout<<2<<" "<<n-i+2<<" ";
		for(int j=n;j>=1;j--) cout<<j<<" ";
		cout<<"\n";
		cout<<1<<" "<<i<<" ";
		for(int j=1;j<=n;j++) cout<<j<<" ";
		cout<<"\n";
	}
	cout<<2<<" "<<1<<" ";
	for(int j=n;j>=1;j--) cout<<j<<" ";
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