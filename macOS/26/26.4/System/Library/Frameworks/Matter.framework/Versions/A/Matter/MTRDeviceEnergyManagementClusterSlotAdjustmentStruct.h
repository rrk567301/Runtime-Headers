@class NSNumber;

@interface MTRDeviceEnergyManagementClusterSlotAdjustmentStruct : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *slotIndex;
@property (copy, nonatomic) NSNumber *nominalPower;
@property (copy, nonatomic) NSNumber *duration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (id)description;

@end
