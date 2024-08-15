//app having the definition of an application capable of counting the triangles that we have given a 
//set of points we find the no. of triangles possible
#include "library.cpp"
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

int countTriangles(vector<point>& points)
{
    int len = points.size();
    if(len<3)
     return 0;

   
    int triangleCount=0;
    for(int i=0;i<len-2;i++){
        for(int j=i+1;j<len-1;j++){
            for(int k=j+1;k<len;k++){
                if(!check_collinear(points[i],points[j],points[k]))
                triangleCount++;
            }
        }
    }
    return triangleCount;
}


int countRightAngled(const vector<point>& points)
{
    int count=0;
    int n=points.size();
    if(n<3)
     return 0;

    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(!check_collinear(points[i],points[j],points[k])){
                    double side1 = compute_dist(points[i],points[j]);
                    double side2 = compute_dist(points[j],points[k]);
                    double side3 = compute_dist(points[i],points[k]);
                    if(is_rightAngled(side1,side2,side3))
                    count++;
                }
            }
        }
    }
    return count;
}



int countIsoceles(const vector<point>& points)
{
    int n=points.size();
    if(n<3)
     return 0;
    int count=0;
    
    for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=j+1; k<n; k++){
                if(!check_collinear(points[i],points[j],points[k])){
                    double side1 = compute_dist(points[i],points[j]);
                    double side2 = compute_dist(points[j],points[k]);
                    double side3 = compute_dist(points[i],points[k]);
                    if(is_isosceles(side1,side2,side3))
                    count++;
                }
            }
        }
    }
    return count;
}



