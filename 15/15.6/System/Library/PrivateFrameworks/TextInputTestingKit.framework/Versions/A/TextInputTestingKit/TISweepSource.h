@class NSMutableDictionary;

@interface TISweepSource : NSObject {
    int stepCount;
}

@property (readonly, nonatomic) NSMutableDictionary *debugValues;
@property (nonatomic) int stepCount;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (char)finished;
- (void)addValue:(id)a0 withMin:(float)a1 withMax:(float)a2;
- (void)addValue:(id)a0 withValue:(float)a1;
- (void)advanceSweep;
- (id)sweepStateHeader;
- (id)sweepStateValues;

@end
