#include<bits/stdc++.h>

using namespace std;
//char a[1024*1024*1024];//ȫ��������Կ���1G�ռ� 
int main() {
	char b[1024*1024];//��������һ����1M���� 
   
    
    char * p=(char*)malloc(sizeof(char)*(1<<30));
	//pָ����е�1G�ֽڿռ���׵�ַ 
	p[0]=0;
	
	free(p);//�ͷ�p
	
	char *t=new char;
	//tָ�����һ���ֽ� 
	delete t;//�ͷ�t 
	char*q=new char[1<<30];
	//qָ����е�1G�ֽڿռ���׵�ַ 
	delete []q;//�ͷ�q
	 
	puts("ok");
	 
    return 0;
}
