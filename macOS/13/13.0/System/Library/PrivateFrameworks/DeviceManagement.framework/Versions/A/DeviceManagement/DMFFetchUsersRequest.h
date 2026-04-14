@interface DMFFetchUsersRequest : DMFTaskRequest

+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;
+ (Class)allowlistedClassForResultObject;

@end
