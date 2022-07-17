#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
//can use pair too instead of int
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


int main(){
	pbds st;
	st.insert(1);
	st.insert(3);
	st.insert(4);
	st.insert(10);
	st.insert(15);

	for(int i=0;i<st.size();i++){//ith largest element in st
		cout<<i<<" "<<*st.find_by_order(i)<<"\n";
	}
	int key =15;

	// number of elements smaller than the key
	cout<<"number of elements smaller than "<<key<<" are "<<st.order_of_key(key)<<"\n";
	key = 12;
	cout<<"number of elements smaller than "<<key<<" are "<<st.order_of_key(key)<<"\n";
	key = 8;
	cout<<"number of elements smaller than "<<key<<" are "<<st.order_of_key(key)<<"\n";
}