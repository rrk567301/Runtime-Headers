@class NSNumber;

@interface MTRThermostatClusterLocalTemperatureChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *currentLocalTemperature;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
