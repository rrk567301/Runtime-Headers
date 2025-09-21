@interface SDPersistence : NSObject

+ (id)containerURL;
+ (id)betaEnrollmentTokensFromOldLocation;
+ (void)deleteBetaEnrollmentTokensFromOldLocations;
+ (id)loadMDMConfigurationWithError:(id *)a0;
+ (id)persistenceDirectory:(char)a0;
+ (void)saveBetaEnrollmentTokens:(id)a0;
+ (id)saveMDMConfiguration:(id)a0;

@end
