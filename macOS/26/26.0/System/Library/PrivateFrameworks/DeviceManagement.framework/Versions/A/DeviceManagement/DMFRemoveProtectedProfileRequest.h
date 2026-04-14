@interface DMFRemoveProtectedProfileRequest : DMFRemoveProfileRequest

+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;

@end
