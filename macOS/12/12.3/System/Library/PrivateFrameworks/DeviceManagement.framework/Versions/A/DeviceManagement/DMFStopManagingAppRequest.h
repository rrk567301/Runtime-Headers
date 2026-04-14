@interface DMFStopManagingAppRequest : DMFAppRequest

+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;

@end
