@class NSArray;

@interface DMFFetchProvisioningProfilesResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *profiles;

+ (BOOL)supportsSecureCoding;

- (id)initWithProfiles:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
