@interface AOSConfig : NSObject

+ (id)sharedInstance;
+ (void)initialize;
+ (id)apsEnvironment;
+ (int)logLevel;
+ (id)urlForKey:(id)a0;
+ (id)AOSKGetAccountSettingsURL:(id)a0 forLoggedInUser:(id)a1 andCurrentClient:(id)a2;
+ (void)setTestLogLevel;
+ (id)AOSKClientInfo;
+ (BOOL)AOSKGetValidationInfo;
+ (void)_setShouldTreatTestAppAsValid:(BOOL)a0;
+ (BOOL)_shouldTreatTestAppAsValid;
+ (id)accountsDirectory;
+ (double)alertWindowSeconds;
+ (BOOL)didDownloadConfig;
+ (BOOL)doUseCFURLConnection;
+ (BOOL)isClientValidationEnabled;
+ (BOOL)isDefaultAlertWindowOverridden;
+ (BOOL)isRunningAsAgent;
+ (BOOL)isURLValidationEnabled;
+ (id)mailAppleID;
+ (id)prefsValueForKey:(id)a0 withIdentifier:(id)a1;
+ (void)revertLogLevel;
+ (void)setIsRunningAsAgent:(BOOL)a0;
+ (void)setPrefsValue:(id)a0 forKey:(id)a1 withIdentifier:(id)a2;
+ (id)u13HeaderName;
+ (id)urlWithAppleID:(id)a0 DSID:(id)a1 andKey:(id)a2;

- (void)clearCaches;
- (id)init;
- (id)setupInfo;
- (void)listenForSystemEvents:(void *)a0;

@end
