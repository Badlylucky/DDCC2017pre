#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
typedef long long ll;

using namespace std;

int main()
{
	int h,w;
	int a,b;
	string m[200];
	bool s[200][200];
	int ans=0;
	int sum=0;
	bool f=true;
	bool hf=true;
	bool wf=true;
	cin>>h>>w;
	cin>>a>>b;
	for(int i=0;i<h;i++)
	{
		cin>>m[i];
		for(int j=0;j<w;j++)
		{
			s[i][j]=true;
		}
	}

	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			if(hf==true && m[i][j]!=m[h-i-1][j])
			{
				hf=false;
			}
			if(wf==true && m[i][j]!=m[i][w-j-1])
			{
				wf=false;
			}
		}
	}
	if(hf==true && wf==true)
	{
		ans -= min(a,b);
	}else if(hf==true){
		ans -=a;
	}else if(wf==true){
		ans-=b;
	}
	for(int i=0;i<h;i++)
	{
		for(int j=0;j<w;j++)
		{
			if(m[i][j]=='S')
			{
				f=true;
				/*
				if(m[i][j]==m[h-i-1][j] && m[i][j]==m[i][w-j-1] && m[i][j]==m[h-i-1][w-j-1])
				{
					sum += a+b+max(a,b);
					//m[h-1-i][j]='.';
					//m[i][w-j-1]='.';
					//m[h-1-i][w-j-1]='.';
				}else if(m[i][j]==m[h-i-1][j] && m[i][j]==m[i][w-j-1]){
					sum += a+b;
					//m[h-1-i][j]='.';
					//m[i][w-j-1]='.';
				}else if(m[i][j]==m[h-i-1][j]){
					sum += a;
					//m[h-1-i][j]='.';
				}else if(m[i][j]==m[i][w-j-1]){
					sum += b;
					//m[i][w-j-1]='.';
				}*/
				if(m[i][j]==m[h-i-1][j])
				{
					sum+=a;
					//m[h-1-i][j]='.';
				}else{
					f=false;
				}
				if(m[i][j]==m[i][w-j-1])
				{
					sum+=b;
					//m[i][w-j-1]='.';
				}else{
					f=false;
				}
				if(f==true && s[i][j]==true && m[i][j]==m[h-i-1][w-j-1])
				{
					ans += max(a,b);
					s[i][j]=false;
					s[h-i-1][j]=false;
					s[i][w-j-1]=false;
					s[h-i-1][w-j-1]=false;
				}
				//m[i][j]='.';
			}
		}
	}
	sum /=2;
	ans += sum+a+b;

	cout<<ans<<endl;
	return 0;
}