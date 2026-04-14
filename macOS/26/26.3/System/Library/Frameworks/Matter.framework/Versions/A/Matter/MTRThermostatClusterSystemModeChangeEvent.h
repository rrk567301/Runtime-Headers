@class NSNumber;

@interface MTRThermostatClusterSystemModeChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousSystemMode;
@property (copy, nonatomic) NSNumber *currentSystemMode;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
