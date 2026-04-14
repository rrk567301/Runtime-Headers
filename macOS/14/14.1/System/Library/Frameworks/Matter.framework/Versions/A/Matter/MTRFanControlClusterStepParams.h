@class NSNumber;

@interface MTRFanControlClusterStepParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *direction;
@property (copy, nonatomic) NSNumber *wrap;
@property (copy, nonatomic) NSNumber *lowestOff;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;

@end
