#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; // this is for size of the array
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k; //take exactly k cards.
	cin>>k; 
	int s1=0,s2=0;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(k!=0)
		{
			s1=sum+a[i];
			s2=sum+a[n-i-1];
			if(s1>s2){
				sum=s1;
			}
			else{
				sum=s2;
			}
			k--;
		}
	}
	cout<<"Maximum count is :"<<sum<<endl;
	
}
