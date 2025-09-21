@class NSDictionary;

@interface DMFFetchConfigurationOrganizationsResultObject : CATTaskResultObject

@property (retain, nonatomic) NSDictionary *organizationsByIdentifier;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
