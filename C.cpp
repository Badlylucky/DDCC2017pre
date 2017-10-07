#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
typedef long long ll;

using namespace std;

int main()
{
	int n;
	int c;
	int l[100000];
	int low = 0;
	int high;
	int ans=0;
	
	cin>>n>>c;
	high = n-1;
	for(int i=0;i<n;i++)
	{
		cin>>l[i];
	}
	sort(l,l+n);

	while(high>=low)
	{
		if(c-l[high]-1>=l[low])
		{
			low++;
		}
		high--;
		ans++;
	}

	cout<<ans<<endl;
	return 0;
}