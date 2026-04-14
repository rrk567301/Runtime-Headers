@interface DMFFetchDeclarationCapabilitiesRequest : DMFTaskRequest

+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (Class)allowlistedClassForResultObject;

@end
