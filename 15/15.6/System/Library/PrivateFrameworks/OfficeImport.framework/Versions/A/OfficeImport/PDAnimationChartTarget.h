@interface PDAnimationChartTarget : PDAnimationShapeTarget {
    char mHasCatagoryIndex;
    int mCatagoryIndex;
    char mHasSeriesIndex;
    int mSeriesIndex;
    char mHasBuildStep;
    int mBuildStep;
    int mChartSubElementType;
}

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)setSeriesIndex:(int)a0;
- (int)buildStep;
- (int)catagoryIndex;
- (int)chartSubElementType;
- (char)hasBuildStep;
- (char)hasCatagoryIndex;
- (char)hasSeriesIndex;
- (int)seriesIndex;
- (void)setBuildStep:(int)a0;
- (void)setCatagoryIndex:(int)a0;
- (void)setChartSubElementType:(int)a0;

@end
