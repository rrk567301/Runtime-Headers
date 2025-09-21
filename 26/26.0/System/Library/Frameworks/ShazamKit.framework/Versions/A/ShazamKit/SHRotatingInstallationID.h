@interface SHRotatingInstallationID : NSObject

+ (void)setCreationDate:(id)a0;
+ (id)creationDate;
+ (id)cachedInstallationIDWithMaxAge:(double)a0;
+ (id)cachedInstallationForDays:(long long)a0;
+ (id)cachedInstallationIDForUTCDay;
+ (id)installationID;
+ (void)setInstallationID:(id)a0;

@end
