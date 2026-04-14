@class NSNumber;

@interface MTRThermostatClusterRunningStateChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousRunningState;
@property (copy, nonatomic) NSNumber *currentRunningState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
