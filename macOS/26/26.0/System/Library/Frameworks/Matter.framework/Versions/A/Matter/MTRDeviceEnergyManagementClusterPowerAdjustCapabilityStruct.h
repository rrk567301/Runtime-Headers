@class NSArray, NSNumber;

@interface MTRDeviceEnergyManagementClusterPowerAdjustCapabilityStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *powerAdjustCapability;
@property (copy, nonatomic) NSNumber *cause;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
