@interface MSDTestPreferences : NSObject

+ (id)sharedInstance;

- (id)catalogURL;
- (BOOL)fakeActivationDemoBit;
- (id)findMyHubServerURL;
- (id)demoUnitServerURL;
- (long long)findMyHubRetryDelay;
- (unsigned int)rebootDelayForStaging;
- (unsigned int)timeShowingFatalError;
- (BOOL)disableParallelProcessing;
- (BOOL)pauseContentUpdateOnError;
- (long long)concurrentDownloadRequest;
- (long long)concurrentDownloadOperation;
- (long long)concurrentSession;
- (double)cachingHubRetryInterval;
- (double)caLogsUploadInterval;
- (double)appUsagePollingInterval;
- (unsigned long long)systemAppTimeoutInterval;
- (unsigned long long)systemAppPollingInterval;
- (long long)deviceActivationFlag;
- (BOOL)mockForBetterTogetherDemo;
- (BOOL)bypassDUForEnrollment;
- (id)iOSHubEnrollment;
- (id)catalogEvaluationPredicate;
- (BOOL)allowStagedPackage;
- (BOOL)allowUnsignedPackage;
- (BOOL)enableKeychainItemAccess;
- (id)screenSaverStartIdleDelay;
- (id)userLogoutIdleTime;
- (id)receiptStoreModelPath;
- (id)receiptStoreDatabaseFilePath;
- (id)getValueFromTestPreferencesForKey:(id)a0;

@end
