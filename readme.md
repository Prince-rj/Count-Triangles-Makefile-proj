# Triangle Classification and Geometry Analysis Application 

Indian Institute of Technology, Ropar
              
LAB ASSIGNMENT -1: Computer Systems MTech AI
    1. Prince Raj - 2024AIM1012
    2. Aksshay Mathew P. - 2024AIM1013
    3. Shubham Jha - 2024CSM1019  

# Overview   
    This application is designed to analyze a set of points and provide detailed geometric properties related to triangles that can be formed from these points. The functionalities include counting the total number of triangles, identifying right-angled and isosceles triangles, and calculating geometric properties such as distance, area, and centroid.

# Features
    1. Triangle Counting:
    Counts the total number of triangles that can be formed from a given set of points.

    2. Right-Angled Triangle Detection:
    Identifies and counts the number of right-angled triangles based on the Pythagorean theorem.

    3. Isosceles Triangle Detection:
    Identifies and counts the number of isosceles triangles using the equality of side lengths.


# Geometric Computations:

    1. Distance Calculation:
    Computes the Euclidean distance between two points.

    2. Collinear Check:
    Determines if three points are collinear, ensuring no triangle is formed.

    3. Centroid Calculation:


    4. Area Calculation:
    Calculates the area of a triangle using the determinant method.


# Library Functions

    double distance(const Point& p1, const Point& p2);
    Computes the Euclidean distance between two points p1 and p2.

    bool areCollinear(const Point& p1, const Point& p2, const Point& p3);
    Returns true if points p1, p2, and p3 are collinear; otherwise, false.

    bool isRightAngled(double side1, double side2, double side3);
    Returns true if the triangle formed by the given side lengths is right-angled.

    bool isIsosceles(double side1, double side2, double side3);
    Returns true if the triangle formed by the given side lengths is isosceles.

    Point centroid(const Point& p1, const Point& p2, const Point& p3);
    Computes and returns the centroid of the triangle formed by points p1, p2, and p3.

    double area(const Point& p1, const Point& p2, const Point& p3);
    Calculates and returns the area of the triangle formed by points p1, p2, and p3.

# MakeFile

    1. The makefile file makes sure we are able to compile all the files at the same time.

    2. It tests for the test cases for libTestCases.cpp and stores the output in op1.txt

    3. It also tests for the test cases for apptestcases.cpp and stores the output in op2.txt

    4. It then compiles the main.cpp file and make a executable output and executes the output and ask for user input on the console.