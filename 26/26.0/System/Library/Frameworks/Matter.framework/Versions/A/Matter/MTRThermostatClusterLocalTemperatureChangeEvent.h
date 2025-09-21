@class NSNumber;

@interface MTRThermostatClusterLocalTemperatureChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *currentLocalTemperature;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
