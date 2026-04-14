@class NSArray;

@interface DMFFetchProvisioningProfilesResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *profiles;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProfiles:(id)a0;

@end
