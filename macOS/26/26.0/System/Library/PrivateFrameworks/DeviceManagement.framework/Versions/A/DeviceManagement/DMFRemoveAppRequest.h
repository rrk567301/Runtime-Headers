@interface DMFRemoveAppRequest : DMFAppRequest

+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;

@end
