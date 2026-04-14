@class NSNumber;

@interface MTRThermostatClusterOccupancyChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousOccupancy;
@property (copy, nonatomic) NSNumber *currentOccupancy;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
