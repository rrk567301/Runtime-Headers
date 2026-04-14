@interface DMFRemoveOSUpdateRequest : DMFTaskRequest

+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;

@end
