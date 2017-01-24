#include<stdio.h>
#include<algorithm>

using namespace std;


bool cmp(int a,int b){
	return a>b;
}

void toArray(int n,int num[]){
	for(int i=0;i<4;i++){
		num[i]=n%10;
		n/=10;
	}
}

int toNum(int num[]){
	int sum=0;
	for(int i=0;i<4;i++){
		sum=sum*10+num[i];
	}
	return sum;
}


int main(){
	int MIN,MAX;
	int n;
	int num[5];
	scanf("%d",&n);
	do{
		toArray(n,num);
		sort(num,num+4);
		MIN=toNum(num);
		sort(num,num+4,cmp);
		MAX=toNum(num);
		n=MAX-MIN;
		printf("%04d - %04d = %04d\n",MAX,MIN,n);
		
	}while(n!=0&&n!=6174);
	return 0;
}
