#include "Palette.h"

/*************** Class Palette  ***************/
Palette::Palette() : LineStyle(0), LineColor(0), FillColor(0)
{
    
}

Palette::Palette(const uint8_t LineStyle, const uint32_t LineColor, const uint32_t FillColor) : LineStyle(LineStyle), LineColor(LineColor), FillColor(FillColor)
{
    
}

void Palette::SetLineStyle(const uint8_t LineStyle)
{
    this->LineStyle = LineStyle;
}   

void Palette::SetLineColor(const uint32_t LineColor)
{
    this->LineColor = LineColor;
}

void Palette::SetFillColor(const uint32_t FillColor)
{
    this->FillColor = FillColor;
}

uint8_t Palette::GetLineStyle(void) const
{
    return LineStyle;
}

uint32_t Palette::GetLineColor(void) const
{
    return LineColor;
}

uint32_t Palette::GetFillColor(void) const
{
    return FillColor;
}
