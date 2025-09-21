@interface DMFFetchOSUpdateStatusRequest : DMFTaskRequest

+ (Class)allowlistedClassForResultObject;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
