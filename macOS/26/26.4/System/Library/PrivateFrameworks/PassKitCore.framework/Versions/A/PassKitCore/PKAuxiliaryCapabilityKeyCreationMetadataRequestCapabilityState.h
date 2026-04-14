@class NSString, PKPassAuxiliaryRegistrationRequirement;

@interface PKAuxiliaryCapabilityKeyCreationMetadataRequestCapabilityState : NSObject

@property (readonly, nonatomic) PKPassAuxiliaryRegistrationRequirement *capability;
@property (readonly, nonatomic) NSString *currentVersion;
@property (readonly, nonatomic) NSString *targetVersion;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCapability:(id)a0 currentVersion:(id)a1 targetVersion:(id)a2;

@end
