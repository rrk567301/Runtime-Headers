@class NSDictionary;

@interface DMFFetchConfigurationOrganizationsResultObject : CATTaskResultObject

@property (retain, nonatomic) NSDictionary *organizationsByIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
