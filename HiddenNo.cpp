#include<iostream>
using namespace std;
int main()
{
	/* 
     Given an array of n integers, The task is to find another integer x such that,
	 if all the elements of the array are subtracted individually from the number x, 
	 then the sum of all the differences should add to 0. If any such integer exists, 
	 print the value of x, else print -1.*/
	int N,i,sum=0;
	cout<<"Enter the size of the array";
	cin>>N;
	int a[N];
    cout<<"enter the array elements";
	for(i=0;i<N;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<N;i++)
	{
	 sum=sum+a[i];
	}
	if(sum%N==0)
	cout<<"The hidden number is "<<sum/N;
	else
	cout<<"-1";
	
	
	return 0;
}//credits Aswin cp
