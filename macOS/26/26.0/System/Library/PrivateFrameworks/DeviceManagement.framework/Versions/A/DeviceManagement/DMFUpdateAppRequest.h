@interface DMFUpdateAppRequest : DMFAppRequest

+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;

@end
