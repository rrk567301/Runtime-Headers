@class NSNumber;

@interface MTRThermostatClusterRunningModeChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousRunningMode;
@property (copy, nonatomic) NSNumber *currentRunningMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
