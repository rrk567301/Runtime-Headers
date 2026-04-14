@class NSNumber;

@interface MTRThermostatClusterRunningStateChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousRunningState;
@property (copy, nonatomic) NSNumber *currentRunningState;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
