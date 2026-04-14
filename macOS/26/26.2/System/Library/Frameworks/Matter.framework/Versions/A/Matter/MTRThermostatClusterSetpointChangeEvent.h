@class NSNumber;

@interface MTRThermostatClusterSetpointChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *systemMode;
@property (copy, nonatomic) NSNumber *occupancy;
@property (copy, nonatomic) NSNumber *previousSetpoint;
@property (copy, nonatomic) NSNumber *currentSetpoint;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
