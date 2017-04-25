#include<bits/stdc++.h>

using namespace std;

int rdtsc()
{
	__asm__ __volatile__("rdtsc");
}

int main()
{
	srand(rdtsc());
	
	for(int i=0;i<100;++i)
		cout<<rand()%99 +1<<" ";
	cout<<endl;
}
