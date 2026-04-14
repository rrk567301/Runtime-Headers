@interface MSDTestPreferences : NSObject

+ (id)sharedInstance;

- (id)catalogURL;
- (BOOL)allowStagedPackage;
- (BOOL)allowUnsignedPackage;
- (double)appUsagePollingInterval;
- (BOOL)bypassDUForEnrollment;
- (double)caLogsUploadInterval;
- (double)cachingHubRetryInterval;
- (id)catalogEvaluationPredicate;
- (long long)concurrentDownloadOperation;
- (long long)concurrentDownloadRequest;
- (long long)concurrentSession;
- (id)demoUnitServerURL;
- (long long)deviceActivationFlag;
- (BOOL)disableParallelProcessing;
- (BOOL)enableKeychainItemAccess;
- (BOOL)fakeActivationDemoBit;
- (BOOL)fakeSealedSystemForEACS;
- (long long)findMyHubRetryDelay;
- (id)findMyHubServerURL;
- (id)getValueFromTestPreferencesForKey:(id)a0;
- (id)iOSHubEnrollment;
- (id)mockAccountSettingsFile;
- (BOOL)mockForBetterTogetherDemo;
- (BOOL)pauseContentUpdateOnError;
- (unsigned int)rebootDelayForStaging;
- (id)receiptStoreDatabaseFilePath;
- (id)receiptStoreModelPath;
- (id)screenSaverStartIdleDelay;
- (unsigned int)systemAppPollingInterval;
- (unsigned int)systemAppTimeoutInterval;
- (unsigned int)timeShowingFatalError;
- (id)userLogoutIdleTime;

@end
