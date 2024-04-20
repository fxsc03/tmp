#include<bits/stdc++.h>
using namespace std;
int t,k,q,a[1010];
void solute()
{
	cin>>k>>q;
	for(int i=1;i<=k;i++) cin>>a[i];
	for(int i=1;i<=q;i++)
	{
		int n;
		cin>>n; int d=0;
		for(int j=1;j<=k;j++)
		{
			if(a[j]<=n)
			{
				d=a[j]; break;
			}
		}
		if(d==0) cout<<n<<" ";
		else cout<<d-1<<" ";
	}
	cout<<'\n';
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