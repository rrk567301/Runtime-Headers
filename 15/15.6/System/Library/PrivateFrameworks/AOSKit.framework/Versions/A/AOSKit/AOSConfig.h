@interface AOSConfig : NSObject

+ (void)initialize;
+ (id)sharedInstance;
+ (id)urlForKey:(id)a0;
+ (int)logLevel;
+ (id)apsEnvironment;
+ (id)AOSKGetAccountSettingsURL:(id)a0 forLoggedInUser:(id)a1 andCurrentClient:(id)a2;
+ (id)AOSKClientInfo;
+ (char)AOSKGetValidationInfo;
+ (id)accountsDirectory;
+ (double)alertWindowSeconds;
+ (char)didDownloadConfig;
+ (char)doUseCFURLConnection;
+ (char)isClientValidationEnabled;
+ (char)isDefaultAlertWindowOverridden;
+ (char)isRunningAsAgent;
+ (char)isURLValidationEnabled;
+ (id)mailAppleID;
+ (id)prefsValueForKey:(id)a0 withIdentifier:(id)a1;
+ (void)setIsRunningAsAgent:(char)a0;
+ (void)setPrefsValue:(id)a0 forKey:(id)a1 withIdentifier:(id)a2;
+ (id)u13HeaderName;
+ (id)urlWithAppleID:(id)a0 DSID:(id)a1 andKey:(id)a2;

- (id)init;
- (void)clearCaches;
- (id)setupInfo;
- (void)listenForSystemEvents:(void *)a0;

@end
