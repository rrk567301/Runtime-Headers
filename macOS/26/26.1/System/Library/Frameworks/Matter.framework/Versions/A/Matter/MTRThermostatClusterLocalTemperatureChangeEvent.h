@class NSNumber;

@interface MTRThermostatClusterLocalTemperatureChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *currentLocalTemperature;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
