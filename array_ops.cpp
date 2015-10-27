#include<iostream>
using namespace std;

int main(){
	int T,N,X,i,fl=0,l=0;
		cin>>T;
		for(int k=0;k<T;k++){
			fl=0;
			cin>>N>>X;
			int A[N];
			for( i=0;i<N;i++){
				cin>>A[i];
				 if(A[i]==X)fl=1;
				}
				i=0;
				l=0;
				int s=0;
				while((i<N)&&(fl==0)){
					s+=A[l];
					if(s==X)fl=1;
					else if(s>X){
						s=0;
						i++;
						l=i;
					}
					else l++;
				}
				if(fl==1)cout<<"YES"<<endl;
				else cout<<"NO"<<endl;
	}
	return 0;
	
}
