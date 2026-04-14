@class NSNumber;

@interface MTRValveConfigurationAndControlClusterValveStateChangedEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *valveState;
@property (copy, nonatomic) NSNumber *valveLevel;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
