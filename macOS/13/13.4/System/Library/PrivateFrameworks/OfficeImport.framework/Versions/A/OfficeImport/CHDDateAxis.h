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
- (int)baseTimeUnit;
- (BOOL)isAutomatic;
- (int)majorTimeUnit;
- (double)majorUnitValue;
- (int)minorTimeUnit;
- (double)minorUnitValue;
- (void)setAutomatic:(BOOL)a0;
- (void)setBaseTimeUnit:(int)a0;
- (void)setMajorTimeUnit:(int)a0;
- (void)setMajorUnitValue:(double)a0;
- (void)setMinorTimeUnit:(int)a0;
- (void)setMinorUnitValue:(double)a0;

@end
