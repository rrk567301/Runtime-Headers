@class NSNumber;

@interface MTRThermostatClusterRunningModeChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousRunningMode;
@property (copy, nonatomic) NSNumber *currentRunningMode;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
