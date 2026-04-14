@class NSNumber;

@interface MTRThermostatClusterLocalTemperatureChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *currentLocalTemperature;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
