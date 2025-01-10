#ifndef POINT_HPP
#define POINT_HPP

/*************** Class Point  ***************/
class Point
{
    private:
    protected:
        double x;
        double y;
    public:
        Point();
        Point(const double, const double);
        void SetX(const double);
        void SetY(const double);
        double GetX(void) const;
        double GetY(void) const;
};

#endif /* #ifndef POINT_HPP */
