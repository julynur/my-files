#ifndef Vector2_hpp
#define Vector2_hpp

#include <stdio.h>

class Vector2{
public:
    double x, y;
    
    Vector2();
    Vector2(double _x, double _y);
    
    double getX();
    double getY();
    void setX(double _x);
    void setY(double _y);
    
    double getLen();
    double getPhi();
    Vector2 PSK();
    Vector2 Norma();
    double KSP(const Vector2& vector);
    double KR(const Vector2& vector);
    Vector2 operator+(const Vector2& vector) const;
    Vector2 operator*(const double & a) const;
    Vector2 operator-(const Vector2& vector) const;
    Vector2 operator/(const double & a) const;
    Vector2 operator*=(const double& a);
    Vector2 operator/=(const double& a);
    bool operator==(const Vector2& vector);
    bool operator!=(const Vector2& vector);

};

#endif /* Vector2_hpp */
