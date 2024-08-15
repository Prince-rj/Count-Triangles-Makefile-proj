#include "app.cpp"
#include <cmath>
#include <vector>
#include <iostream>
using namespace std;

void runTests() {
    vector<point> points1 = {{0, 0}, {1, 0}, {0, 1}, {1, 1}};
    vector<point> points2 = {{0, 0}, {3, 0}, {0, 4}, {3, 4}};
    vector<point> points3 = {{1, 1}, {2, 2}, {3, 3}, {4, 4}};
    vector<point> points4 = {{0, 0}, {1, 0}, {0, 1}, {1, 1}, {2, 2}};
    vector<point> points5 = {{0, 0}, {2, 0}, {2, 2}, {0, 2}, {1, 1}};
    vector<point> points6 = {{0, 0}, {1, 0}, {0, 1}, {1, 1}, {2, 2}, {2, 0}};
    vector<point> points7 = {{0, 0}, {2, 0}, {2, 2}, {0, 2}, {1, 1}, {3, 3}};
    vector<point> points8 = {{0, 0}, {1, 1}, {2, 2}, {3, 1}, {4, 0}, {2, 1}};
    vector<point> points9 = {{0, 0}, {1, 0}, {1, 1}, {0, 1}, {2, 2}, {2, 1}};
    vector<point> points10 = {{0, 0}, {1, 0}, {1, 1}, {0, 1}, {2, 2}, {1, 2}, {2, 1}};
    vector<point> points11 = {{0, 0}, {1, 0}, {0, 1}, {1, 1}, {2, 0}, {2, 1}, {3, 0}};
    vector<point> points12 = {{0, 0}, {3, 0}, {3, 3}, {0, 3}, {1, 1}, {2, 2}, {1, 2}};
    vector<point> points13 = {{0, 0}, {4, 0}, {4, 3}, {0, 3}, {2, 1}, {2, 2}};
    vector<point> points14 = {{0, 0}, {2, 1}, {1, 2}, {3, 3}, {4, 4}, {2, 2}};
    vector<point> points15 = {{0, 0}, {2, 2}, {4, 2}, {2, 4}, {0, 4}, {1, 1}};
    vector<point> points16 = {{1, 2}, {2, 3}, {4, 5}, {6, 7}, {8, 9}, {10, 11}};
    vector<point> points17 = {{1, 1}, {2, 3}, {3, 5}, {4, 7}, {5, 9}, {6, 11}};
    vector<point> points18 = {{0, 0}, {1, 0}, {0, 1}, {1, 1}, {2, 2}, {3, 3}, {4, 4}};
    vector<point> points19 = {{0, 0}, {2, 2}, {4, 2}, {2, 4}, {0, 4}, {2, 3}};
    vector<point> points20 = {{0, 0}, {1, 1}, {2, 2}, {3, 3}, {4, 4}, {5, 5}, {6, 6}};
    vector<point> points21 = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}, {5, 10}, {6, 12}};
    
    // Output results
    cout << "Total Triangles in points1: " << countTriangles(points1) << " == 4" << endl;
    cout << "Total Triangles in points2: " << countTriangles(points2) << " == 4" << endl;
    cout << "Total Triangles in points3: " << countTriangles(points3) << " == 0" << endl;
    cout << "Total Triangles in points4: " << countTriangles(points4) << " == 9" << endl;
    cout << "Total Triangles in points5: " << countTriangles(points5) << " == 8" << endl;
    cout << "Total Triangles in points6: " << countTriangles(points6) << " == 18" << endl;
    cout << "Total Triangles in points7: " << countTriangles(points7) << " == 15" << endl;
    cout << "Total Triangles in points8: " << countTriangles(points8) << " == 17" << endl;
    cout << "Total Triangles in points9: " << countTriangles(points9) << " == 18" << endl;
    cout << "Total Triangles in points10: " << countTriangles(points10) << " == 32" << endl;
    cout << "Total Triangles in points11: " << countTriangles(points11) << " == 30" << endl;
    cout << "Total Triangles in points12: " << countTriangles(points12) << " == 30" << endl;
    cout << "Total Triangles in points13: " << countTriangles(points13) << " == 20" << endl;
    cout << "Total Triangles in points14: " << countTriangles(points14) << " == 16" << endl;
    cout << "Total Triangles in points15: " << countTriangles(points15) << " == 19" << endl;
    cout << "Total Triangles in points16: " << countTriangles(points16) << " == 0" << endl;
    cout << "Total Triangles in points17: " << countTriangles(points17) << " == 0" << endl;
    cout << "Total Triangles in points18: " << countTriangles(points18) << " == 25" << endl;
    cout << "Total Triangles in points19: " << countTriangles(points19) << " == 18" << endl;
    cout << "Total Triangles in points20: " << countTriangles(points20) << " == 0" << endl;
    cout << "Total Triangles in points21: " << countTriangles(points21) << " == 0" << endl;
    
    cout << "Right-Angled Triangles in points1: " << countRightAngled(points1) << " == 4" << endl;
    cout << "Right-Angled Triangles in points2: " << countRightAngled(points2) << " == 4" << endl;
    cout << "Right-Angled Triangles in points3: " << countRightAngled(points3) << " == 0" << endl;
    cout << "Right-Angled Triangles in points4: " << countRightAngled(points4) << " == 4" << endl;
    cout << "Right-Angled Triangles in points5: " << countRightAngled(points5) << " == 8" << endl;
    cout << "Right-Angled Triangles in points6: " << countRightAngled(points6) << " == 10" << endl;
    cout << "Right-Angled Triangles in points7: " << countRightAngled(points7) << " == 10" << endl;
    cout << "Right-Angled Triangles in points8: " << countRightAngled(points8) << " == 6" << endl;
    cout << "Right-Angled Triangles in points9: " << countRightAngled(points9) << " == 9" << endl;
    cout << "Right-Angled Triangles in points10: " << countRightAngled(points10) << " == 18" << endl;
    cout << "Right-Angled Triangles in points11: " << countRightAngled(points11) << " == 18" << endl;
    cout << "Right-Angled Triangles in points12: " << countRightAngled(points12) << " == 5" << endl;
    cout << "Right-Angled Triangles in points13: " << countRightAngled(points13) << " == 6" << endl;
    cout << "Right-Angled Triangles in points14: " << countRightAngled(points14) << " == 1" << endl;
    cout << "Right-Angled Triangles in points15: " << countRightAngled(points15) << " == 6" << endl;
    cout << "Right-Angled Triangles in points16: " << countRightAngled(points16) << " == 0" << endl;
    cout << "Right-Angled Triangles in points17: " << countRightAngled(points17) << " == 0" << endl;
    cout << "Right-Angled Triangles in points18: " << countRightAngled(points18) << " == 4" << endl;
    cout << "Right-Angled Triangles in points19: " << countRightAngled(points19) << " == 6" << endl;
    cout << "Right-Angled Triangles in points20: " << countRightAngled(points20) << " == 0" << endl;
    cout << "Right-Angled Triangles in points21: " << countRightAngled(points21) << " == 0" << endl;
    
    cout << "Isosceles Triangles in points1: " << countIsoceles(points1) << " == 4" << endl;
    cout << "Isosceles Triangles in points2: " << countIsoceles(points2) << " == 0" << endl;
    cout << "Isosceles Triangles in points3: " << countIsoceles(points3) << " == 0"<< endl;
    cout << "Isosceles Triangles in points4: " << countIsoceles(points4) << " == 5" << endl;
    cout << "Isosceles Triangles in points5: " << countIsoceles(points5) << " == 6" << endl;
    cout << "Isosceles Triangles in points6: " << countIsoceles(points6) << " == 10" << endl;
    cout << "Isosceles Triangles in points7: " << countIsoceles(points7) << " == 9" << endl;
    cout << "Isosceles Triangles in points8: " << countIsoceles(points8) << " == 5" << endl;
    cout << "Isosceles Triangles in points9: " << countIsoceles(points9) << " == 8" << endl;
    cout << "Isosceles Triangles in points10: " << countIsoceles(points10) << " == 16" << endl;
    cout << "Isosceles Triangles in points11: " << countIsoceles(points11) << " == 12" << endl;
    cout << "Isosceles Triangles in points12: " << countIsoceles(points12) << " == 10" << endl;
    cout << "Isosceles Triangles in points13: " << countIsoceles(points13) << " == 4" << endl;
    cout << "Isosceles Triangles in points14: " << countIsoceles(points14) << " == 6" << endl;
    cout << "Isosceles Triangles in points15: " << countIsoceles(points15) << " == 8" << endl;
    cout << "Isosceles Triangles in points16: " << countIsoceles(points16) << " == 0" << endl;
    cout << "Isosceles Triangles in points17: " << countIsoceles(points17) << " == 0" << endl;
    cout << "Isosceles Triangles in points18: " << countIsoceles(points18) << " == 7" << endl;
    cout << "Isosceles Triangles in points19: " << countIsoceles(points19) << " == 5" << endl;
    cout << "Isosceles Triangles in points20: " << countIsoceles(points20) << " == 0" << endl;
    cout << "Isosceles Triangles in points21: " << countIsoceles(points21) << " == 0" << endl;
}

int main() {
    runTests();
    return 0;
}
