#include <iostream>
#include <vector>
using namespace std ;
void bubblesort ( vector<int>& v , int be , int en )
{
	if ( be >= en ) return ; 	//base condn for recursion to end 
	for ( int i = be ; i < en-1 ; i++ )
	{
		bubblesort( v , i + 1 , en ) ;  // leave frst element and do bubblesort in rest
		if ( v[i] > v[i + 1] ) 			// some work to do now after swapping
		{
			swap(v[i],v[i+1]) ;
		}
		else break ; 					// already sorted !! No work to do
	}
}
int main()
{
	int n ;
	cin >> n ;    // number of integers to be sorted
	vector<int> v ;
	while ( n-- ) 
	{
		int val ;
		cin >> val ;
		v.push_back(val) ;
	}
	bubblesort( v , 0 , v.size() ) ;
	for ( int i = 0 ; i < v.size() ; i++) 
	{
		cout << v[i] << " " ;
	}
}