/*#include<iostream>
#include<string>
using namespace std;
int main(){    
	string str,res,cur;    
	cin>>str;    
	for(int i=0;i<=str.length();i++){        
		if(str[i]>='0' && str[i]<='9')
			cur+=str[i];        
		else{            
			if(res.length()<cur.length())
				res=cur;            
				cur="";        
		}    
	}    
	cout<<res;    
	system("pause");
	return 0;
}*/

//�����ַ�����ʹ��curȥ��¼���������ִ�������������������ַ������ʾһ�����������ִ������ˣ��� ���ִ���֮ǰ�����ִ��Ƚϣ��������������¸��������ִ����µ�res
#include<iostream> 
#include<string> 
using namespace std; 
int main() {    
	string str,res,cur;    
	cin>>str;    
	for(int i=0;i<=str.length();i++) {        
		// ����+=��cur        
		if(str[i]>='0' && str[i]<='9') {            
			cur+=str[i];        }        
		else {            
			// �ҳ��������ַ�����������ַ���            
			if(res.size() < cur.size())                
				res=cur;            
			else                
				cur.clear();        
		}    
	}    
	cout<<res;    
	return 0; 
} 