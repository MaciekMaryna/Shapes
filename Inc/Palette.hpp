#ifndef PALETTE_HPP
#define PALETTE_HPP

/*************** Class Palette  ***************/
class Palette
{
    private:
    protected:
        uint8_t LineStyle;
        uint32_t LineColor;
        uint32_t FillColor;
    public:
        Palette();
        Palette(const uint8_t, const uint32_t, const uint32_t);
        void SetLineStyle(const uint8_t);
        void SetLineColor(const uint32_t);
        void SetFillColor(const uint32_t);
        uint8_t GetLineStyle(void) const;
        uint32_t GetLineColor(void) const;
        uint32_t GetFillColor(void) const;
};

#endif /* #ifndef PALETTE_HPP */