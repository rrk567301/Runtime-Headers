@class NSNumber;

@interface MTROnOffClusterOnWithTimedOffParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *onOffControl;
@property (copy, nonatomic) NSNumber *onTime;
@property (copy, nonatomic) NSNumber *offWaitTime;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
