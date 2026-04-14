@class NSString, DMFReportingRequirements;

@interface DMFConfigurationSource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSString *machServiceName;
@property (retain, nonatomic) DMFReportingRequirements *reportingRequirements;

- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
