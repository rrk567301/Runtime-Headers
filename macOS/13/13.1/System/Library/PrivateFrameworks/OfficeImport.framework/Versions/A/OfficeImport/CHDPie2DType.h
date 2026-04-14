@interface CHDPie2DType : CHDChartType {
    int mFirstSliceAngle;
    BOOL mDoughnutType;
    BOOL mPieOfPieType;
    BOOL mBarOfPieType;
}

- (id)initWithChart:(id)a0;
- (int)defaultLabelPosition;
- (int)firstSliceAngle;
- (void)setFirstSliceAngle:(int)a0;
- (BOOL)isDoughnutType;
- (void)setDoughnutType:(BOOL)a0;
- (BOOL)isPieOfPieType;
- (void)setPieOfPieType:(BOOL)a0;
- (BOOL)isBarOfPieType;
- (void)setBarOfPieType:(BOOL)a0;
- (BOOL)hasExplosion;
- (id)contentFormat;

@end
