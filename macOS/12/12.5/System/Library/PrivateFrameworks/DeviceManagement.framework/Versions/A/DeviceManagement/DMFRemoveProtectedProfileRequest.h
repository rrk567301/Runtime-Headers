@interface DMFRemoveProtectedProfileRequest : DMFRemoveProfileRequest

+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;

@end
