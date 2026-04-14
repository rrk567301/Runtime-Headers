@interface CHDDateAxis : CHDAxis {
    BOOL mAutomatic;
    double mMajorUnitValue;
    double mMinorUnitValue;
    int mMinorTimeUnit;
    int mMajorTimeUnit;
    int mBaseTimeUnit;
}

- (id)initWithResources:(id)a0;
- (BOOL)isDate;
- (BOOL)isAutomatic;
- (void)setAutomatic:(BOOL)a0;
- (double)majorUnitValue;
- (void)setMajorUnitValue:(double)a0;
- (double)minorUnitValue;
- (void)setMinorUnitValue:(double)a0;
- (int)majorTimeUnit;
- (void)setMajorTimeUnit:(int)a0;
- (int)minorTimeUnit;
- (void)setMinorTimeUnit:(int)a0;
- (int)baseTimeUnit;
- (void)setBaseTimeUnit:(int)a0;

@end
