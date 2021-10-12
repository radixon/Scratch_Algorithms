	#include <iostream>
	
	
	
	int *insertsort(int *a, int len)
	{
		int key(0);
		int i(0);
				 
		for(int j=0; j<len; j++)
		{
			key = a[j];
			i = j - 1;
			while(i>=0 && a[i]>key)
			{
				a[i+1] = a[i];
				i = i - 1;
			}
			a[i+1] = key;
		}
		return a;
	}
	int main(){
		using namespace std;
		
		
		int val[] = {37,4,2,55,2245,6,2252,6565,67778,0,8};
		int arrSize = *(&val + 1) - val;
		int *x;
		
		x = insertsort(val,arrSize);
		for(int i=0;i<arrSize;i++)
			cout << x[i] << " ";
	}
