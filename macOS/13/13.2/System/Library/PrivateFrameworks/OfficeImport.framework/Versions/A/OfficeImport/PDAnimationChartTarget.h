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
- (int)chartSubElementType;
- (void)setChartSubElementType:(int)a0;
- (BOOL)hasCatagoryIndex;
- (int)catagoryIndex;
- (void)setCatagoryIndex:(int)a0;
- (BOOL)hasSeriesIndex;
- (int)seriesIndex;
- (void)setSeriesIndex:(int)a0;
- (BOOL)hasBuildStep;
- (int)buildStep;
- (void)setBuildStep:(int)a0;

@end
