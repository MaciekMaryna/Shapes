/******************************************************************************
 * Includes
 ******************************************************************************/
#include <Point.hpp>

/*********** Class Point ***********/
Point::Point() x(0), y(0)
{
    
}

Point::Point(const double x, const double y) : x(x), y(y)
{

}   

Point::SetX(const double x)
{
    this->x = x;
}

Point::SetY(const double y)
{
    this->y = y;
}

Point::GetX(void) const
{
    return x;
}

Point::GetY(void) const
{
    return y;
}

