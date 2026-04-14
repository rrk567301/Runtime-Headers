@class NSNumber;

@interface MTRDeviceEnergyManagementClusterPowerAdjustEndEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *cause;
@property (copy, nonatomic) NSNumber *duration;
@property (copy, nonatomic) NSNumber *energyUse;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
