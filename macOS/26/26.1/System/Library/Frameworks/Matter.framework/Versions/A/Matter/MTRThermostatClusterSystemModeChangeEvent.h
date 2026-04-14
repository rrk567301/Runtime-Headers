@class NSNumber;

@interface MTRThermostatClusterSystemModeChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousSystemMode;
@property (copy, nonatomic) NSNumber *currentSystemMode;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
