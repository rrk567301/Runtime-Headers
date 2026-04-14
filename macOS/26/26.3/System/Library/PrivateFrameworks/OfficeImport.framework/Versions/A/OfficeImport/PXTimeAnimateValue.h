@class NSString;

@interface PXTimeAnimateValue : NSObject {
    id mVariant;
    BOOL mHasPercentTime;
    double mPercentTime;
    NSString *mFormula;
}

- (id)variant;
- (id)init;
- (void)setVariant:(id)a0;
- (void).cxx_destruct;
- (void)setPercentTime:(double)a0;
- (id)formula;
- (BOOL)hasPercentTime;
- (double)percentTime;
- (void)setFormula:(id)a0;

@end
