@class NSNumber;

@interface MTRTimeSynchronizationClusterSetUtcTimeParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *utcTime;
@property (copy, nonatomic) NSNumber *granularity;
@property (copy, nonatomic) NSNumber *timeSource;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
