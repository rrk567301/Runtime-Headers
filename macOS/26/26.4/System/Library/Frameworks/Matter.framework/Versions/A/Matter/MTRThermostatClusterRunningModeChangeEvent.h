@class NSNumber;

@interface MTRThermostatClusterRunningModeChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousRunningMode;
@property (copy, nonatomic) NSNumber *currentRunningMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
