@interface DMFRemoveOSUpdateRequest : DMFTaskRequest

+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
