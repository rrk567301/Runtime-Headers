@class NSNumber;

@interface MTRDeviceEnergyManagementClusterPowerAdjustEndEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *cause;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *energyUse;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
