@interface DMFFetchUsersRequest : DMFTaskRequest

+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (Class)allowlistedClassForResultObject;

@end
