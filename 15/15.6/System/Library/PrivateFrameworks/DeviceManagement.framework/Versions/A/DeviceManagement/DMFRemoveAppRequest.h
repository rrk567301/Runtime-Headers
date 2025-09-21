@interface DMFRemoveAppRequest : DMFAppRequest

+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
