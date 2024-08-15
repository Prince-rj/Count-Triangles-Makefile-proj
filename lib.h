#ifndef COORDINATE_GEOMERTY_H
#define COORDINATE_GEOMETRY_H


#include<vector>
using namespace std;

struct point{
    double x,y;
};



double compute_dist(point p1, point p2);
bool check_collinear(point p1, point p2, point p3);
double calc_area(point p1, point p2, point p3);
int count_Triangles(const vector<point>& points);
bool is_isosceles(double side1, double side2, double side3);
int count_isosceles(const vector<point>& points);
bool is_rightAngled(double side1, double side2, double side3);
int count_rightAngled(const vector<point>& points);
bool is_equilateral(double side1, double side2, double side3);
int count_equilateral(const vector<point>& points);




#endif


