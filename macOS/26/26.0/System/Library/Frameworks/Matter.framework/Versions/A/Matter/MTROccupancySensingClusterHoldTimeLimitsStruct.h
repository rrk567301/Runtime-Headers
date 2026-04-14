@class NSNumber;

@interface MTROccupancySensingClusterHoldTimeLimitsStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *holdTimeMin;
@property (copy, nonatomic) NSNumber *holdTimeMax;
@property (copy, nonatomic) NSNumber *holdTimeDefault;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
