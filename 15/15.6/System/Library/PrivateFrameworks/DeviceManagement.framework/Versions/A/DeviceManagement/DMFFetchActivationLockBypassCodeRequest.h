@interface DMFFetchActivationLockBypassCodeRequest : DMFTaskRequest

+ (Class)allowlistedClassForResultObject;
+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
