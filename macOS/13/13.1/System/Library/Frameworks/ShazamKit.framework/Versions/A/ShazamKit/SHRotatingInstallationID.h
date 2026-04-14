@interface SHRotatingInstallationID : NSObject

+ (id)creationDate;
+ (void)setCreationDate:(id)a0;
+ (id)installationID;
+ (id)cachedInstallationIDForUTCDay;
+ (id)cachedInstallationForDays:(long long)a0;
+ (id)cachedInstallationIDWithMaxAge:(double)a0;
+ (void)setInstallationID:(id)a0;

@end
