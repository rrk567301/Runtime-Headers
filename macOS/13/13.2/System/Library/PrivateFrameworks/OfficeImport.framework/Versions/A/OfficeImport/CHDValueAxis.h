@interface CHDValueAxis : CHDAxis {
    BOOL mPercentageFormattingFlag;
    BOOL mAutoMajorUnitValue;
    BOOL mAutoMinorUnitValue;
    double mMajorUnitValue;
    double mMinorUnitValue;
    double mScalingLogBase;
    int mBuiltInUnit;
    BOOL mShowBuiltInUnit;
}

- (id)initWithResources:(id)a0;
- (void)adjustAxisPositionForHorizontalChart;
- (double)majorUnitValue;
- (void)setMajorUnitValue:(double)a0;
- (double)minorUnitValue;
- (void)setMinorUnitValue:(double)a0;
- (double)scalingLogBase;
- (void)setScalingLogBase:(double)a0;
- (BOOL)isPercentageFormattingFlag;
- (void)setPercentageFormattingFlag:(BOOL)a0;
- (BOOL)isAutoMajorUnitValue;
- (BOOL)isAutoMinorUnitValue;
- (BOOL)isShowBuiltInUnit;
- (void)setShowBuiltInUnitFlag:(BOOL)a0;
- (int)builtInUnit;
- (void)setBuiltInUnit:(int)a0;
- (id)contentFormatWithBuiltInUnit;

@end
