#include <iostream>

using namespace std;

int main() {
	int N;
	string a;
			cin>>N;
			for(int i=0;i<N;i++){
				cin>>a;
				string rev(a.rbegin(),a.rend());
				cout<<rev<<endl;
			}
			return 0;
}

