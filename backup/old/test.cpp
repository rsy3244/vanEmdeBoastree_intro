#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()
#define llong long long

using namespace std;

signed main(){
	int n; cin >> n;
	set<int> s;
	for(int i = 0; i < n; i++){
		int q,x,y; cin >> q >> x;
		switch(q){
			case 0:
				s.insert(x);
				cout << s.size() << endl;
				break;
			case 1:
				cout << (s.find(x) != s.end()) << endl;
				break;
			case 2:
				s.erase(x);
				break;
			case 3:
				cin >> y;
				for(auto itr = s.lower_bound(x); itr != s.upper_bound(y); ++itr){
					cout << *itr << endl;
				}
				break;
		}
	}

	return 0;
}


