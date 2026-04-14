@interface DMFClearRestrictionsPasswordRequest : DMFTaskRequest

+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;

@end
