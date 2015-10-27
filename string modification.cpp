#include <iostream>

using namespace std;

int main() {
	int N;
	string a;
			cin>>N;
			for(int i=0;i<N;i++){
				cin>>a;
				string b;
				char c = a[0];
				b+=c;
				for(int j=0;j<a.size();j++){
					if(c!=a[j])b+=a[j];
					c=a[j];			
				}
				cout<<b;
			}
			return 0;
}

