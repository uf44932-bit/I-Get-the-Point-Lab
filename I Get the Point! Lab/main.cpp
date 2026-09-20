/*
 Create a class called Point that is initialized with the x- and y-coordinates of a point in a Cartesian coordinate plane. Then, create the following overloaded operators on the class - distance, equality, inequality, midpoint, and output streaming.

 ✅ Acceptance Criteria

 Create a Point class that takes an x and y coordinate in its constructor.
 Override the - operator on Point so that it calculates the distance between the two points.
 Override the == operator on Point so that it determines if two points are the same coordinate or different coordinates.
 Override the != operator on Point so that it determines if two points are not the same coordinate or different coordinates.
 Override the / operator on Point so that it determines midpoint between the two points.
 Override the << operator on Point so that a user can stream a point as if it were a C++ string.

 */


#include <iostream>
#include <cmath>


using namespace std;

class point{
private:
    double x;
    double y;
    
public:
    point(double xValue, double yValue){
        x = xValue;
        y = yValue;
    }
    
    
    double operator-(const point& other) const {
        double xDifference = other.x - x;
        double yDifference = other.y - y;
        
        return sqrt(xDifference*xDifference + yDifference*yDifference);
    }
    
    
    bool operator==(const point& other) const {
        return x == other.x&& y == other.y;
    }
    bool operator!=(const point& other) const {
        return!(*this==other);
    }
    
    point operator/(const point& other) const{
        double middlex = (x + other.x)/2;
        double middley = (y + other.y)/2;
        
        return point(middlex, middley);
    }
                                            
                                
    
    
};


int main() {
    
  
    return EXIT_SUCCESS;
}
