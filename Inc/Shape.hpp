#ifndef SHAPE_HPP
#define SHAPE_HPP

/***********************************************************/
/*** Includes *********************************************/
/***********************************************************/
#include "Palette.hpp"
#include "Point.hpp"

/*************** Class Shape  ***************/
class Shape
{
    private:
    protected:
        Palette palette;
        Point position;
    public:
        Shape();
        Shape(const Palette&, const Point&);
        void SetPalette(const Palette&);
        void SetPosition(const Point&);
        Palette GetPalette(void) const;
        Point GetPosition(void) const;
};

#endif /* SHAPE_HPP */