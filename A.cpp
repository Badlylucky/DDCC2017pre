#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
typedef long long ll;

using namespace std;

int main()
{
	string n;
	bool ans=false;
	
	cin>>n;
	if(n[0]==n[1] && n[1]!=n[2] &&n[2]==n[3])
	{
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	return 0;
}