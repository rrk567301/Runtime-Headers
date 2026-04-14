@class NSNumber;

@interface MTRThermostatClusterSetpointRaiseLowerParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *mode;
@property (copy, nonatomic) NSNumber *amount;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
