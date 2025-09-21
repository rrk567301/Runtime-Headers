@class NSString;

@interface PXTimeAnimateValue : NSObject {
    id mVariant;
    char mHasPercentTime;
    double mPercentTime;
    NSString *mFormula;
}

- (id)init;
- (void).cxx_destruct;
- (id)variant;
- (void)setVariant:(id)a0;
- (id)formula;
- (void)setPercentTime:(double)a0;
- (char)hasPercentTime;
- (double)percentTime;
- (void)setFormula:(id)a0;

@end
