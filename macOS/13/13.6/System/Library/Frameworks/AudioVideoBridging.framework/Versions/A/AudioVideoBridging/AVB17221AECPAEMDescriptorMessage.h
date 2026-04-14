@interface AVB17221AECPAEMDescriptorMessage : AVB17221AECPAEMMessage

@property (nonatomic) unsigned short descriptorType;
@property (nonatomic) unsigned short descriptorIndex;

+ (id)keyPathsForValuesAffectingDescriptorIndex;
+ (id)keyPathsForValuesAffectingDescriptorType;

- (id)init;
- (void)_makeItMutable;

@end
