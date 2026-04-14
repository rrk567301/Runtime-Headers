@interface DMFFetchInstalledApplicationsRequest : DMFFetchApplicationsRequest

+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;

@end
