@class NSString, HMDAccessoryFirmwareUpdatePolicyCriteria;

@interface HMDAccessoryFirmwareUpdatePolicyServiceConfiguration : NSObject

@property (readonly) NSString *type;
@property (readonly) NSString *category;
@property (readonly) HMDAccessoryFirmwareUpdatePolicyCriteria *criteria;

- (id)initWithType:(id)a0 category:(id)a1 criteria:(id)a2;
- (void).cxx_destruct;

@end
