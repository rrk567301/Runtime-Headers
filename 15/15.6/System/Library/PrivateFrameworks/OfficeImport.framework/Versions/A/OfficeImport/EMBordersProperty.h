@class OITSUColor;

@interface EMBordersProperty : CMProperty <NSCopying> {
    OITSUColor *mBorderColor;
    OITSUColor *mBorderTopColor;
    OITSUColor *mBorderLeftColor;
    OITSUColor *mBorderBottomColor;
    OITSUColor *mBorderRightColor;
    int mBorderStyle[5];
    int mBorderWidth[5];
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)borderColor;
- (id)colorString;
- (id)styleHashNumber;
- (id)widthHashNumber;
- (int *)borderStyles;
- (int *)borderWidths;
- (id)cssString;
- (id)cssStringForName:(id)a0;
- (char)hasSameColorsAs:(id)a0;
- (char)hasSameStylesAs:(id)a0;
- (char)hasSameWidthsAs:(id)a0;
- (id)initWithEDBorders:(id)a0;
- (id)initWithOADStroke:(id)a0;
- (char)isNoneAtLocation:(int)a0;
- (void)setBorderStyleAndWidth:(int)a0 location:(unsigned int)a1;
- (void)setNoneAtLocation:(int)a0;
- (id)stringFromColor:(id)a0;
- (id)stringFromStyleEnum:(int)a0;
- (id)stringFromWidthEnum:(int)a0;
- (id)styleString;
- (id)widthString;

@end
