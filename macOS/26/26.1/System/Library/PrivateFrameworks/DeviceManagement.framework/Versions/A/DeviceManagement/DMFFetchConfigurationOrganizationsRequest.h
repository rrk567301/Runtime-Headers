@interface DMFFetchConfigurationOrganizationsRequest : DMFTaskRequest

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (Class)allowlistedClassForResultObject;

@end
