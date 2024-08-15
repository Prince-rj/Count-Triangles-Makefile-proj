#include "library.cpp"
#include <iostream>
#include <cmath>
using namespace std;

void run_tests() {
    // Testcases for distance calculation
    cout << "the check for the function of distance between two points:" << endl;
    cout << compute_dist({0, 0}, {3, 4}) << " == 5" << endl;
    cout << compute_dist({1, 1}, {1, 1}) << " == 0" << endl;
    cout << compute_dist({-1, -1}, {-4, -5}) << " == 5" << endl;
    cout << compute_dist({0, 0}, {0, 0}) << " == 0" << endl;
    cout << compute_dist({1000, 2000}, {3000, 4000}) << " == 2828.42712" << endl;
    cout << compute_dist({-3, -4}, {3, 4}) << " == 10" << endl;
    cout << compute_dist({0, 0}, {1, 0}) << " == 1" << endl;
    cout << compute_dist({0, 0}, {0, 1}) << " == 1" << endl;
    cout << compute_dist({-2, -3}, {2, 3}) << " == 7.2111" << endl;
    cout << compute_dist({-3, 0}, {0, 4}) << " == 5" << endl;
    cout << compute_dist({3, 4}, {0, 0}) << " == 5" << endl;
    cout << compute_dist({-1, 1}, {1, -1}) << " == 2.82843" << endl;
    cout << compute_dist({-5, -5}, {5, 5}) << " == 14.1421" << endl;
    cout << compute_dist({100, 100}, {100, 100}) << " == 0" << endl;

    cout << "checking if the given points are colinear or not" << endl;
    cout << check_collinear({0, 0}, {1, 1}, {2, 2}) << " == true" << endl;
    cout << check_collinear({0, 0}, {1, 1}, {1, 2}) << " == false" << endl;
    cout << check_collinear({0, 0}, {2, 4}, {4, 8}) << " == true" << endl;
    cout << check_collinear({-1, -1}, {0, 0}, {1, 2}) << " == false" << endl;
    cout << check_collinear({1, 1}, {2, 2}, {3, 3}) << " == true" << endl;
    cout << check_collinear({0, 0}, {0, 1}, {1, 1}) << " == false" << endl;
    cout << check_collinear({0, 0}, {0, 2}, {0, 4}) << " == true" << endl;
    cout << check_collinear({-2, -2}, {2, 2}, {4, 4}) << " == true" << endl;
    cout << check_collinear({-1, -1}, {1, 1}, {2, -2}) << " == false" << endl;
    cout << check_collinear({2, 2}, {4, 4}, {8, 8}) << " == true" << endl;
    cout << check_collinear({1, 1}, {2, 2}, {2, 3}) << " == false" << endl;
    cout << check_collinear({-3, -3}, {3, 3}, {6, 6}) << " == true" << endl;
    cout << check_collinear({0, 0}, {1, 2}, {2, 4}) << " == true" << endl;
    cout << check_collinear({0, 0}, {2, 1}, {4, 2}) << " == true" << endl;
    cout << check_collinear({-1, 1}, {1, -1}, {2, -2}) << " == true" << endl;
    cout << check_collinear({0, 0}, {1, 1}, {3, 3}) << " == true" << endl;
    cout << check_collinear({0, 0}, {1, 2}, {3, 6}) << " == true" << endl;
    cout << check_collinear({-1, -1}, {0, 0}, {1, 1}) << " == true" << endl;
    cout << check_collinear({1, 1}, {2, 2}, {4, 5}) << " == false" << endl;
    
    
        // Testcases for calculating the area of the triangle
cout << "calculating the area of triangle:" << endl;
    cout << calc_area({0, 0}, {4, 0}, {0, 3}) << " == 6" << endl;
    cout << calc_area({0, 0}, {1, 1}, {2, 2}) << " == 0" << endl;
    cout << calc_area({-1, -1}, {1, 1}, {1, -1}) << " == 2" << endl;
    cout << calc_area({0, 0}, {0, 5}, {5, 0}) << " == 12.5" << endl;
    cout << calc_area({0, 0}, {1, 1}, {0, 2}) << " == 1" << endl;
    cout << calc_area({0, 0}, {2, 2}, {2, 0}) << " == 2" << endl;
    cout << calc_area({-1, -1}, {1, 1}, {1, -1}) << " == 2" << endl;
    cout << calc_area({0, 0}, {1, 0}, {0, 1}) << " == 0.5" << endl;
    cout << calc_area({-3, -3}, {3, 3}, {3, -3}) << " == 18" << endl;
    cout << calc_area({-2, -2}, {2, 2}, {2, -2}) << " == 8" << endl;
    cout << calc_area({0, 0}, {1, 0}, {0, -1}) << " == 0.5" << endl;
    cout << calc_area({1, 1}, {4, 5}, {7, 1}) << " == 12" << endl;
    cout << calc_area({0, 0}, {3, 0}, {3, 3}) << " == 4.5" << endl;
    cout << calc_area({-1, -1}, {1, 1}, {-1, 1}) << " == 2" << endl;
    cout << calc_area({0, 0}, {4, 4}, {4, 0}) << " == 8" << endl;
    cout << calc_area({1, 1}, {4, 4}, {1, 4}) << " == 4.5" << endl;
    cout << calc_area({2, 3}, {5, 7}, {8, 3}) << " == 12" << endl;
    cout << calc_area({0, 0}, {6, 0}, {3, 5}) << " == 15" << endl;
    
    cout << "checking the centroid of triangle:" << endl;
    point c1 = centroid({0, 0}, {2, 0}, {1, 3});
    cout << c1.x << ", " << c1.y << " == 1, 1" << endl;
    point c2 = centroid({1, 1}, {1, 1}, {1, 1});
    cout << c2.x << ", " << c2.y << " == 1, 1" << endl;
    point c5 = centroid({0, 0}, {1, 1}, {2, 2});
    cout << c5.x << ", " << c5.y << " == 1, 1" << endl;
    point c6 = centroid({1, 1}, {2, 2}, {3, 3});
    cout << c6.x << ", " << c6.y << " == 2, 2" << endl;
    point c7 = centroid({0, 0}, {0, 4}, {4, 0});
    cout << c7.x << ", " << c7.y << " == 4/3, 4/3" << endl;
    point c8 = centroid({-1, -1}, {-1, 1}, {1, -1});
    cout << c8.x << ", " << c8.y << " == -1/3, -1/3" << endl;
    point c9 = centroid({0, 0}, {2, 2}, {2, 0});
    cout << c9.x << ", " << c9.y << " == 4/3, 2/3" << endl;
    point c10 = centroid({-2, -2}, {2, 2}, {2, -2});
    cout << c10.x << ", " << c10.y << " == 2/3, -2/3" << endl;
    point c11 = centroid({0, 0}, {1, 1}, {1, 0});
    cout << c11.x << ", " << c11.y << " == 2/3, 1/3" << endl;
    point c12 = centroid({-1, -1}, {-1, 1}, {1, 1});
    cout << c12.x << ", " << c12.y << " == -1/3, 1/3" << endl;
    point c13 = centroid({0, 0}, {1, 1}, {2, 0});
    cout << c13.x << ", " << c13.y << " == 1, 1/3" << endl;
    point c14 = centroid({1, 1}, {4, 5}, {7, 1});
    cout << c14.x << ", " << c14.y << " == 4, 2.33333" << endl;
    point c15 = centroid({0, 0}, {0, 5}, {5, 0});
    cout << c15.x << ", " << c15.y << " == 5/3, 5/3" << endl;
    point c16 = centroid({-1, 1}, {1, -1}, {1, 1});
    cout << c16.x << ", " << c16.y << " == 1/3, 1/3" << endl;
    point c17 = centroid({2, 2}, {4, 4}, {6, 2});
    cout << c17.x << ", " << c17.y << " == 4, 8/3" << endl;
    point c18 = centroid({1, 1}, {2, 2}, {3, 1});
    cout << c18.x << ", " << c18.y << " == 2, 4/3" << endl;
    point c19 = centroid({0, 0}, {3, 3}, {3, 0});
    cout << c19.x << ", " << c19.y << " == 2, 1" << endl;
    point c20 = centroid({-2, -2}, {-2, 2}, {2, 2});
    cout << c20.x << ", " << c20.y << " == -2/3, 2/3" << endl;
    
        
        
    
        // Testcases for checking if the triangle is a isosceles triangle or not
        
    cout << "checking if the triangle is_isosceles or not:" << endl;
    cout << is_isosceles(3, 3, 5) << " == true" << endl;
    cout << is_isosceles(4, 4, 4) << " == true" << endl;
    cout << is_isosceles(2, 3, 4) << " == false" << endl;
    cout << is_isosceles(5, 5, 8) << " == true" << endl;
    cout << is_isosceles(10, 10, 10) << " == true" << endl;
    cout << is_isosceles(6, 6, 6) << " == true" << endl;
    cout << is_isosceles(7, 7, 7) << " == true" << endl;
    cout << is_isosceles(1, 2, 1) << " == true" << endl;
    cout << is_isosceles(4, 5, 4) << " == true" << endl;
    cout << is_isosceles(8, 10, 8) << " == true" << endl;
    cout << is_isosceles(3, 4, 5) << " == false" << endl;
    cout << is_isosceles(1, 1, 2) << " == true" << endl;
    cout << is_isosceles(5, 5, 10) << " == true" << endl;
    cout << is_isosceles(9, 9, 9) << " == true" << endl;
    cout << is_isosceles(6, 7, 6) << " == true" << endl;
    cout << is_isosceles(4, 4, 6) << " == true" << endl;
    cout << is_isosceles(8, 8, 16) << " == true" << endl;
    cout << is_isosceles(5, 7, 5) << " == true" << endl;
    cout << is_isosceles(3, 5, 3) << " == true" << endl;
    cout << is_isosceles(2, 2, 3) << " == true" << endl;
    
    
       // Testcases for checking if the triangle is rightAngled triangle or not
    cout << "checking if the triangle is rightAngled triangle or not:" << endl;
    cout << is_rightAngled(3, 4, 5) << " == true" << endl;
    cout << is_rightAngled(5, 12, 13) << " == true" << endl;
    cout << is_rightAngled(8, 15, 17) << " == true" << endl;
    cout << is_rightAngled(7, 24, 25) << " == true" << endl;
    cout << is_rightAngled(1, 1, sqrt(2)) << " == true" << endl;
    cout << is_rightAngled(6, 8, 10) << " == true" << endl;
    cout << is_rightAngled(9, 12, 15) << " == true" << endl;
    cout << is_rightAngled(12, 16, 20) << " == true" << endl;
    cout << is_rightAngled(15, 20, 25) << " == true" << endl;
    cout << is_rightAngled(18, 24, 30) << " == true" << endl;
    cout << is_rightAngled(7, 10, 12) << " == false" << endl;
    cout << is_rightAngled(1, 1, 1) << " == false" << endl;
    cout << is_rightAngled(10, 10, 10) << " == false" << endl;
    cout << is_rightAngled(2, 3, 4) << " == false" << endl;
    cout << is_rightAngled(3, 3, 5) << " == false" << endl;
    cout << is_rightAngled(4, 5, 6) << " == false" << endl;
    cout << is_rightAngled(5, 6, 7) << " == false" << endl;
    cout << is_rightAngled(6, 7, 8) << " == false" << endl;
    cout << is_rightAngled(7, 8, 9) << " == false" << endl;
    cout << is_rightAngled(8, 9, 10) << " == false" << endl;
}

int main() {
    run_tests();
    return 0;
}
