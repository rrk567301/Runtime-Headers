@interface SHRotatingInstallationID : NSObject

+ (id)creationDate;
+ (void)setCreationDate:(id)a0;
+ (id)cachedInstallationIDForUTCDay;
+ (id)installationID;
+ (id)cachedInstallationIDWithMaxAge:(double)a0;
+ (void)setInstallationID:(id)a0;

@end
