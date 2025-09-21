@class NSString, DMFReportingRequirements, NSXPCListenerEndpoint;

@interface DMFRegisterConfigurationSourceRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *configurationSourceName;
@property (copy, nonatomic) NSString *organizationIdentifier;
@property (copy, nonatomic) NSString *machServiceName;
@property (retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;
@property (copy, nonatomic) DMFReportingRequirements *reportingRequirements;

+ (char)supportsSecureCoding;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
