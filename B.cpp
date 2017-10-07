#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
typedef long long ll;

using namespace std;

int main()
{
	int a,b,c,d;
	int ans=0;
	
	cin>>a>>b>>c>>d;

	ans = a*1728+b*144+c*12+d;
	cout<<ans<<endl;
	return 0;
}