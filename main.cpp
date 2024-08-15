#include <iostream>
#include "app.cpp"
#include <vector>


using namespace std;

int main(){
	int t;
	cout<<"Give no. of testcases: ";
	cin>>t;
	while(t>0){
		int n;
		cout<<"Give the no. of points: ";
		cin>>n;
		vector<point> v;
		for(int i=0;i<n;i++){
			cout<<"Give point(x,y) as x y: ";
			double x,y;
			cin>>x>>y;
			v.push_back({x,y});
		}
		for(int i=0;i<n;i++){
			cout<<v[i].x<<" "<<v[i].y<<endl;
		}
		cout << "Total Triangles: " << countTriangles(v) << endl;
		cout << "Total Right angled Triangles: " << countRightAngled(v) << endl;
		cout << "Total Isosceles Triangles: " << countIsoceles(v) << endl;
		t--;
	}
	return 0;
}
