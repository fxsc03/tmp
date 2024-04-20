#include<bits/stdc++.h>
using namespace std;
int t,n,a[200010];
void solute()
{
	cin>>n;
	for(int i=1;i<=n;i++) a[i]=0;
	for(int i=1;i<=n;i++) 
	{
		int b; cin>>b;
		a[b]++;
	}
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==2) ans++;
	}
	cout<<ans<<"\n";
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