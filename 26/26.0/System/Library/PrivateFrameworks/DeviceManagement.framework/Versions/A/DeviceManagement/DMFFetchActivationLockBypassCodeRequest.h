@interface DMFFetchActivationLockBypassCodeRequest : DMFTaskRequest

+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (Class)allowlistedClassForResultObject;

@end
