@interface AVB17221AECPAEMDescriptorMessage : AVB17221AECPAEMMessage

@property (nonatomic) unsigned short descriptorType;
@property (nonatomic) unsigned short descriptorIndex;

+ (id)keyPathsForValuesAffectingDescriptorType;
+ (id)keyPathsForValuesAffectingDescriptorIndex;

- (id)init;
- (void)_makeItMutable;

@end
