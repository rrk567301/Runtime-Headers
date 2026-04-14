@class NSNumber;

@interface MTRThermostatClusterRunningStateChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousRunningState;
@property (copy, nonatomic) NSNumber *currentRunningState;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
