@interface CHDBar2DType : CHDChartTypeWithGrouping {
    int mGapWidth;
    BOOL mColumn;
    int mOverlap;
}

- (void)setColumn:(BOOL)a0;
- (BOOL)isHorizontal;
- (int)gapWidth;
- (void)setGapWidth:(int)a0;
- (int)overlap;
- (void)setOverlap:(int)a0;
- (BOOL)isColumn;
- (id)initWithChart:(id)a0;
- (int)defaultLabelPosition;

@end
