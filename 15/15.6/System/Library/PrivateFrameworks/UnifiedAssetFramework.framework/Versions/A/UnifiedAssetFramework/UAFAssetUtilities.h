@class UAFRetryState, NSString, NSDictionary, NSObject, UAFAssetStatus;
@protocol OS_dispatch_group, UAFAssetUtilitiesDelegate, OS_nw_path_evaluator, OS_dispatch_queue;

@interface UAFAssetUtilities : NSObject {
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    unsigned long long _observerOptions;
}

@property (retain, nonatomic) UAFAssetStatus *assetStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assistantQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *assistantGroup;
@property (retain, nonatomic) NSString *siriLanguage;
@property (nonatomic) char assistantEnabled;
@property (nonatomic) char understandingOnDeviceAssetsAvailable;
@property (retain, nonatomic) NSDictionary *assistantUODStatus;
@property (retain, nonatomic) UAFRetryState *retryState;
@property (nonatomic) char networkSatisfied;
@property (nonatomic) char networkExpensive;
@property (weak, nonatomic) id<UAFAssetUtilitiesDelegate> delegate;
@property (nonatomic) char autoRetryEnabled;
@property (nonatomic) unsigned int autoRetryLimit;
@property (nonatomic) double autoRetryDelayOnFailure;
@property (nonatomic) double autoRetryDelayOnFailureIncrement;
@property (nonatomic) double autoRetryDelayOnSettingsChanged;
@property (nonatomic) double assetAvailableCheckTimeout;
@property (nonatomic) char showHybridAsUnsupported;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_createConnection;
- (void)startObservers;
- (id)currentAssetStatus;
- (void)downloadSiriAssetsIfNeeded;
- (void)startObserversWithOptions:(unsigned long long)a0;
- (void)_assistantLanguageUpdate;
- (void)_assistantPreferencesUpdate;
- (unsigned long long)_checkFreeSpaceNeededForLanguage:(id)a0 forClient:(unsigned long long)a1;
- (void)_downloadSiriAssetsOverCellular:(char)a0;
- (void)_downloadSiriAssetsRetry;
- (void)_downloadSiriAssetsWithDelay:(double)a0;
- (void)_handleNetworkPathUpdate:(id)a0;
- (char)_networkIsExpensiveForPath:(id)a0;
- (char)_networkIsSatisfiedForPath:(id)a0;
- (void)_stopObservers;
- (void)_triggerDelegateAssetStatusUpdated;
- (void)_updateDelegateForUODAvailable:(char)a0 uodStatus:(id)a1;
- (void)assetsAreAvailableForLanguage:(id)a0 completion:(id /* block */)a1;
- (void)downloadSiriAssets;
- (void)downloadSiriAssetsOverCellular;
- (id)getAssistantLanguageIfAvailableSync;
- (id)getDiskSpaceNeededInBytesForLanguage:(id)a0 forClient:(unsigned long long)a1;
- (char)hasSufficientDiskSpaceForClient:(unsigned long long)a0;
- (char)hasSufficientDiskSpaceForDownload;
- (void)refreshUAFAssetStatusAsync;
- (void)refreshUnderstandingOnDeviceAssetsAvailableAsync;

@end
