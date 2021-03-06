//使用vector<vector<int>>定义一个二维数组，resize开 空间并初始化，每个位置初始化为1，表示当蛋糕，a[i][j]位置放蛋糕，则可以标记处a[i][j + 2]和a[i + 1][j]位置 不能放蛋糕，
//遍历一遍二维数组，标记处不能放蛋糕的位置，统计也就统计出了当蛋糕的位置数
#include<iostream> 
#include<vector> 
using namespace std; 
int main() {    
	int w,h,res = 0;    
	cin >> w >> h;    
	vector<vector<int>> a;    
	a.resize(w);    
	for(auto& e : a)        
		e.resize(h, 1);        
	for(int i=0;i<w;i++) {        
		for(int j=0;j<h;j++) {            
			if(a[i][j]==1) {                
				res++;                
				// 标记不能放蛋糕的位置                
				if((i+2)<w)                    
					a[i+2][j] = 0;                                
				if((j+2)<h)                    
					a[i][j+2] = 0;            
			}        
		}    
	}    
	cout << res;    
	return 0; 
}