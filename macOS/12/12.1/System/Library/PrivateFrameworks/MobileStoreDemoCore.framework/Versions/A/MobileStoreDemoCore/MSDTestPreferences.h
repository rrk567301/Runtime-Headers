@interface MSDTestPreferences : NSObject

+ (id)sharedInstance;

- (id)catalogURL;
- (id)getValueFromTestPreferencesForKey:(id)a0;
- (BOOL)fakeActivationDemoBit;
- (id)findMyHubServerURL;
- (long long)findMyHubRetryDelay;
- (unsigned int)rebootDelayForStaging;
- (BOOL)disableParallelProcessing;
- (BOOL)pauseContentUpdateOnError;
- (long long)concurrentDownloadRequest;
- (long long)concurrentDownloadOperation;
- (long long)concurrentSession;
- (double)cachingHubRetryInterval;
- (double)appUsagePollingInterval;
- (unsigned long long)systemAppTimeoutInterval;
- (unsigned long long)systemAppPollingInterval;
- (long long)deviceActivationFlag;
- (BOOL)bypassDUForEnrollment;
- (id)iOSHubEnrollment;
- (id)catalogEvaluationPredicate;
- (BOOL)allowStagedPackage;
- (BOOL)allowUnsignedPackage;
- (BOOL)enableKeychainItemAccess;
- (id)screenSaverStartIdleDelay;
- (id)userLogoutIdleTime;

@end
