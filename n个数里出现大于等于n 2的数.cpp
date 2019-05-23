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

/*#include<vector> 
#include<iostream> 
#include<algorithm> 
using namespace std; 
int main() {    
	int n;    
	vector <int> vec;    
	while (cin >> n) {
		vec.push_back(n);
	}
	sort(vec.begin(), vec.end());        
	cout << vec[vec.size()/2-1] << endl;    
	return 0; 
}*/