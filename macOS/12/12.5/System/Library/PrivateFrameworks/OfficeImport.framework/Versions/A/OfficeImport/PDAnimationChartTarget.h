@interface PDAnimationChartTarget : PDAnimationShapeTarget {
    BOOL mHasCatagoryIndex;
    int mCatagoryIndex;
    BOOL mHasSeriesIndex;
    int mSeriesIndex;
    BOOL mHasBuildStep;
    int mBuildStep;
    int mChartSubElementType;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)setChartSubElementType:(int)a0;
- (int)chartSubElementType;
- (int)catagoryIndex;
- (int)seriesIndex;
- (int)buildStep;
- (BOOL)hasCatagoryIndex;
- (void)setCatagoryIndex:(int)a0;
- (BOOL)hasSeriesIndex;
- (void)setSeriesIndex:(int)a0;
- (BOOL)hasBuildStep;
- (void)setBuildStep:(int)a0;

@end
