@class NSArray, NSNumber;

@interface MTRDeviceEnergyManagementClusterPowerAdjustCapabilityStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *powerAdjustCapability;
@property (copy, nonatomic) NSNumber *cause;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
