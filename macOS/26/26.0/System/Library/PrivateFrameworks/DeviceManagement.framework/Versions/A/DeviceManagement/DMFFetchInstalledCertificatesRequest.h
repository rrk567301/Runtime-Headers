@interface DMFFetchInstalledCertificatesRequest : DMFFetchCertificatesRequest

+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;

@end
