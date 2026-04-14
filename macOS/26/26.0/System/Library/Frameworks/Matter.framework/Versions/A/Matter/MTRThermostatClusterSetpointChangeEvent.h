@class NSNumber;

@interface MTRThermostatClusterSetpointChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *systemMode;
@property (copy, nonatomic) NSNumber *occupancy;
@property (copy, nonatomic) NSNumber *previousSetpoint;
@property (copy, nonatomic) NSNumber *currentSetpoint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
