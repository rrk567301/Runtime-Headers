@interface AOSConfig : NSObject

+ (void)initialize;
+ (id)sharedInstance;
+ (id)urlForKey:(id)a0;
+ (int)logLevel;
+ (id)apsEnvironment;
+ (void)setPrefsValue:(id)a0 forKey:(id)a1 withIdentifier:(id)a2;
+ (id)urlWithAppleID:(id)a0 DSID:(id)a1 andKey:(id)a2;
+ (id)AOSKGetAccountSettingsURL:(id)a0 forLoggedInUser:(id)a1 andCurrentClient:(id)a2;
+ (BOOL)AOSKGetValidationInfo;
+ (id)AOSKClientInfo;
+ (BOOL)doUseCFURLConnection;
+ (id)mailAppleID;
+ (id)u13HeaderName;
+ (id)accountsDirectory;
+ (BOOL)isRunningAsAgent;
+ (BOOL)isURLValidationEnabled;
+ (id)prefsValueForKey:(id)a0 withIdentifier:(id)a1;
+ (double)alertWindowSeconds;
+ (BOOL)isDefaultAlertWindowOverridden;
+ (void)setIsRunningAsAgent:(BOOL)a0;
+ (BOOL)isClientValidationEnabled;
+ (BOOL)didDownloadConfig;

- (id)init;
- (void)clearCaches;
- (id)setupInfo;
- (void)listenForSystemEvents:(void *)a0;

@end
