@interface DMFRemoveProtectedProfileRequest : DMFRemoveProfileRequest

+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
