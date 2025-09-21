@class NSNumber;

@interface MTRThermostatClusterSystemModeChangeEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *previousSystemMode;
@property (copy, nonatomic) NSNumber *currentSystemMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
