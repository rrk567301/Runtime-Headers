@class NSNumber;

@interface MTRWindowCoveringClusterGoToLiftPercentageParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *liftPercent100thsValue;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
