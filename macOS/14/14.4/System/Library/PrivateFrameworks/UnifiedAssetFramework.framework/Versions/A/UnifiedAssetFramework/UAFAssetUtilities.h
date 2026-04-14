@class UAFRetryState, NSString, NSDictionary, NSObject, UAFAssetStatus;
@protocol OS_dispatch_group, UAFAssetUtilitiesDelegate, OS_nw_path_evaluator, OS_dispatch_queue;

@interface UAFAssetUtilities : NSObject {
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    unsigned long long _observerOptions;
    BOOL _networkSatisfied;
    BOOL _networkExpensive;
}

@property (retain, nonatomic) UAFAssetStatus *assetStatus;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *downloadQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *statusQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assistantQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *assistantGroup;
@property (retain, nonatomic) NSString *siriLanguage;
@property (nonatomic) BOOL assistantEnabled;
@property (nonatomic) BOOL understandingOnDeviceAssetsAvailable;
@property (retain, nonatomic) NSDictionary *assistantUODStatus;
@property (retain, nonatomic) UAFRetryState *retryState;
@property (weak, nonatomic) id<UAFAssetUtilitiesDelegate> delegate;
@property (nonatomic) BOOL autoRetryEnabled;
@property (nonatomic) unsigned int autoRetryLimit;
@property (nonatomic) double autoRetryDelayOnFailure;
@property (nonatomic) double autoRetryDelayOnFailureIncrement;
@property (nonatomic) double autoRetryDelayOnSettingsChanged;
@property (nonatomic) double assetAvailableCheckTimeout;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_createConnection;
- (void)startObservers;
- (void)startObserversWithOptions:(unsigned long long)a0;
- (BOOL)_assetsAreAvailableForLanguageSync:(id)a0 delegateEnabled:(BOOL)a1;
- (void)_assistantLanguageUpdate;
- (void)_assistantPreferencesAndLanguageUpdate;
- (unsigned long long)_checkFreeSpaceNeededForDownloadForLanguage:(id)a0;
- (void)_downloadSiriAssetsOverCellular:(BOOL)a0;
- (void)_downloadSiriAssetsRetry;
- (void)_downloadSiriAssetsWithDelay:(double)a0;
- (void)_handleNetworkPathUpdate:(id)a0;
- (BOOL)_networkIsExpensiveForPath:(id)a0;
- (BOOL)_networkIsSatisfiedForPath:(id)a0;
- (id)_refreshUAFAssetStatusSync;
- (void)_stopObservers;
- (void)_triggerDelegateAssetStatusUpdated;
- (void)_updateDelegateForUODAvailable:(BOOL)a0 uodStatus:(id)a1 delegateEnabled:(BOOL)a2;
- (BOOL)assetsAreAvailableForLanguageSync:(id)a0;
- (id)currentAssetStatus;
- (void)downloadSiriAssets;
- (void)downloadSiriAssetsIfNeeded;
- (void)downloadSiriAssetsOverCellular;
- (id)getAssistantLanguageIfAvailableSync;
- (id)getDownloadSizeInBytesForLanguage:(id)a0;
- (BOOL)hasSufficientDiskSpaceForDownload;
- (void)refreshUAFAssetStatusAsync;
- (void)refreshUnderstandingOnDeviceAssetsAvailableAsync;

@end
