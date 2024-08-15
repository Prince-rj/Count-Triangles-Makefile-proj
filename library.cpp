#include "lib.h"
#include <cmath>
using namespace std;


double compute_dist(point p1, point p2)
 {
    
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
 }


bool check_collinear(point p1, point p2, point p3) 
{
    
   double area = calc_area(p1, p2, p3);
    return area==0;
}


double calc_area(point p1, point p2, point p3) 
{
    return 0.5 * fabs(p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y));
}



point centroid(point p1, point p2, point p3)
{
    return {(p1.x + p2.x + p3.x)/3, (p1.y + p2.y + p3.y)/3};
}

bool is_isosceles(double side1, double side2, double side3)
{
    const double EPSILON = 1e-9;
    bool condition1 = fabs(side1 - side2) < EPSILON;
    bool condition2 = fabs(side2 - side3) < EPSILON;
    bool condition3 = fabs(side1 - side3) < EPSILON;
    if(condition1 || condition2 || condition3)
    return true;
    return false;
}


bool is_rightAngled(double side1, double side2, double side3) {
    const double EPSILON = 1e-9;  
    double a = min(side1, min(side2, side3));
    double c = max(side1, max(side2, side3));
    double b = side1 + side2 + side3 - a - c;
    
    return fabs(c * c - (a * a + b * b)) < EPSILON;
}



