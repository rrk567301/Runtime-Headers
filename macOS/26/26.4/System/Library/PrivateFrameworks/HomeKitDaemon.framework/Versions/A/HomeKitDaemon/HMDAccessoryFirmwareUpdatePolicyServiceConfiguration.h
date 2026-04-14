@class NSString, HMDAccessoryFirmwareUpdatePolicyCriteria;

@interface HMDAccessoryFirmwareUpdatePolicyServiceConfiguration : NSObject <HMFFastEncodable>

@property (readonly) NSString *type;
@property (readonly) NSString *category;
@property (readonly) HMDAccessoryFirmwareUpdatePolicyCriteria *criteria;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
