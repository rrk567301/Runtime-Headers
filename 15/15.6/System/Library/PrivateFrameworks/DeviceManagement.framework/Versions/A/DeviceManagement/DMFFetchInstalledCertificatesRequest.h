@interface DMFFetchInstalledCertificatesRequest : DMFFetchCertificatesRequest

+ (char)isPermittedOnSystemConnection;
+ (char)isPermittedOnUserConnection;
+ (id)permittedPlatforms;

@end
