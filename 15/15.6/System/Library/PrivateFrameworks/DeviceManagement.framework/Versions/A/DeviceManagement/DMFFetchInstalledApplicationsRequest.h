@interface DMFFetchInstalledApplicationsRequest : DMFFetchApplicationsRequest

+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
