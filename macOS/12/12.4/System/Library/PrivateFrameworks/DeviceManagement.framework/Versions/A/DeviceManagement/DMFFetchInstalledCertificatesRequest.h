@interface DMFFetchInstalledCertificatesRequest : DMFFetchCertificatesRequest

+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;
+ (BOOL)isPermittedOnUserConnection;

@end
