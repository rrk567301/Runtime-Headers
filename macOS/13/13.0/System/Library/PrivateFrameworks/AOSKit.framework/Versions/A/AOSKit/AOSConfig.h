@interface AOSConfig : NSObject

+ (void)initialize;
+ (id)sharedInstance;
+ (id)urlForKey:(id)a0;
+ (int)logLevel;
+ (id)apsEnvironment;
+ (double)alertWindowSeconds;
+ (BOOL)isDefaultAlertWindowOverridden;
+ (id)accountsDirectory;
+ (BOOL)doUseCFURLConnection;
+ (BOOL)isRunningAsAgent;
+ (void)setIsRunningAsAgent:(BOOL)a0;
+ (id)urlWithAppleID:(id)a0 DSID:(id)a1 andKey:(id)a2;
+ (BOOL)isClientValidationEnabled;
+ (BOOL)AOSKGetValidationInfo;
+ (BOOL)isURLValidationEnabled;
+ (id)mailAppleID;
+ (id)u13HeaderName;
+ (id)AOSKClientInfo;
+ (id)AOSKGetAccountSettingsURL:(id)a0 forLoggedInUser:(id)a1 andCurrentClient:(id)a2;
+ (void)setPrefsValue:(id)a0 forKey:(id)a1 withIdentifier:(id)a2;
+ (id)prefsValueForKey:(id)a0 withIdentifier:(id)a1;
+ (BOOL)didDownloadConfig;

- (id)init;
- (void)clearCaches;
- (id)setupInfo;
- (void)listenForSystemEvents:(void *)a0;

@end
