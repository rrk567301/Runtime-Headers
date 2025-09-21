@interface AVB17221AECPAEMLockEntityMessage : AVB17221AECPAEMMessage

@property (nonatomic) char unlock;
@property (nonatomic) unsigned long long lockedControllerID;
@property (nonatomic) unsigned short descriptorType;
@property (nonatomic) unsigned short descriptorIndex;

+ (id)keyPathsForValuesAffectingDescriptorIndex;
+ (id)keyPathsForValuesAffectingDescriptorType;
+ (id)keyPathsForValuesAffectingLockedControllerID;
+ (id)keyPathsForValuesAffectingUnlock;

- (char)unlock;
- (unsigned short)descriptorType;
- (void)setDescriptorType:(unsigned short)a0;
- (unsigned short)descriptorIndex;
- (unsigned long long)lockedControllerID;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setDescriptorIndex:(unsigned short)a0;
- (void)setLockedControllerID:(unsigned long long)a0;
- (void)setUnlock:(char)a0;

@end
