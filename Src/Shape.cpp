/******************************************************************************
 * Includes
 ******************************************************************************/
#include <Shape.hpp>

/*********** Class Shape ***********/
Shape::Shape() : palette(), position()
{
    
}   

Shape::Shape(const Palette& palette, const Point& position) : palette(palette), position(position)
{
    
}

Shape::SetPalette(const Palette& palette)
{
    this->palette = palette;
}

Shape::SetPosition(const Point& position)
{
    this->position = position;
}

Shape::GetPalette(void) const
{
    return palette;
}

Shape::GetPosition(void) const
{
    return position;
}

