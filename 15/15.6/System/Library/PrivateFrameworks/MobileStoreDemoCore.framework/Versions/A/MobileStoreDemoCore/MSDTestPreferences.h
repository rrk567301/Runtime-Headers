@interface MSDTestPreferences : NSObject

+ (id)sharedInstance;

- (id)catalogURL;
- (char)allowStagedPackage;
- (char)allowUnsignedPackage;
- (double)appUsagePollingInterval;
- (char)bailOnStashedStagingRestoreFailure;
- (char)bypassDUForEnrollment;
- (double)caLogsUploadInterval;
- (double)cachingHubRetryInterval;
- (id)catalogEvaluationPredicate;
- (long long)concurrentDownloadOperation;
- (long long)concurrentDownloadRequest;
- (long long)concurrentSession;
- (id)demoUnitServerURL;
- (long long)deviceActivationFlag;
- (char)disableParallelProcessing;
- (char)enableAIModelAutoUpdate;
- (char)enableKeychainItemAccess;
- (char)fakeActivationDemoBit;
- (char)fakeSealedSystemForEACS;
- (long long)findMyHubRetryDelay;
- (id)getValueFromTestPreferencesForKey:(id)a0;
- (id)iOSHubEnrollment;
- (id)mockAccountSettingsFile;
- (char)mockForBetterTogetherDemo;
- (id)mockOSUpdateRequestFile;
- (id)mockPeerProtocolVersion;
- (char)pauseContentUpdateOnError;
- (unsigned int)rebootDelayForStaging;
- (id)receiptStoreDatabaseFilePath;
- (id)receiptStoreModelPath;
- (id)screenSaverIdleDelay;
- (id)screenSaverStartIdleDelay;
- (unsigned int)systemAppPollingInterval;
- (unsigned int)systemAppTimeoutInterval;
- (unsigned int)timeShowingFatalError;
- (id)userLogoutIdleTime;

@end
