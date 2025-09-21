@class NSNumber;

@interface MTRThermostatClusterRunningStateChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousRunningState;
@property (copy, nonatomic) NSNumber *currentRunningState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
