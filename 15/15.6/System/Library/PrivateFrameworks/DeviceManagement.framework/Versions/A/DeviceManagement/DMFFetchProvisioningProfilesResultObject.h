@class NSArray;

@interface DMFFetchProvisioningProfilesResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *profiles;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProfiles:(id)a0;

@end
