@interface DMFFetchInstalledApplicationsRequest : DMFFetchApplicationsRequest

+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;

@end
