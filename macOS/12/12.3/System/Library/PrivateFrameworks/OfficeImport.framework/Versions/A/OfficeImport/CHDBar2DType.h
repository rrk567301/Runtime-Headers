@interface CHDBar2DType : CHDChartTypeWithGrouping {
    int mGapWidth;
    BOOL mColumn;
    int mOverlap;
}

- (void)setColumn:(BOOL)a0;
- (BOOL)isHorizontal;
- (id)initWithChart:(id)a0;
- (void)setOverlap:(int)a0;
- (void)setGapWidth:(int)a0;
- (int)gapWidth;
- (int)overlap;
- (BOOL)isColumn;
- (int)defaultLabelPosition;

@end
