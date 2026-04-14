@protocol CBRampManagerI;

@interface CBAppliedCompensations : NSObject {
    id<CBRampManagerI> _rampManager;
    double _maxHarmony;
    double _maxBLR;
}

@property (nonatomic) BOOL harmonyEnabled;
@property (nonatomic) BOOL blrEnabled;
@property (readonly) double harmonyComp;
@property (readonly) double blrComp;

- (void)dealloc;
- (id)copyStatusInfo;
- (double)compensationFor:(double)a0 andMax:(double)a1;
- (id)initWithRampManager:(id)a0 maxHarmony:(double)a1 maxBLR:(double)a2;

@end
