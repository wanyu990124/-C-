//输入数组a后对a排序，数组中间的数就是我们要找的
#include<iostream>
#include<algorithm>
using namespace std;
#define MaxSize 101
int main() {    
	int a[MaxSize];    
	int j = 0;    
	while (cin >> a[j]){        
		j++;    
	}    
	sort(a, a + j);      
	int m=j/2-1;    
	cout <<a[m]<<endl;    
	return 0;
}