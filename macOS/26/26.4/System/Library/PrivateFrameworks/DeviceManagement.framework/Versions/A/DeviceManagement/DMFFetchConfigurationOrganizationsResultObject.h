@class NSDictionary;

@interface DMFFetchConfigurationOrganizationsResultObject : CATTaskResultObject

@property (retain, nonatomic) NSDictionary *organizationsByIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
