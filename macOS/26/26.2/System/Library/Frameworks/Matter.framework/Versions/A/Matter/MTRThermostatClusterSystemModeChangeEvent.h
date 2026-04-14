@class NSNumber;

@interface MTRThermostatClusterSystemModeChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousSystemMode;
@property (copy, nonatomic) NSNumber *currentSystemMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
