@class NSObject, NSSet, NSBackgroundActivityScheduler, NSMutableSet, NSError, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface SUBackgroundManager : NSObject {
    NSMutableArray *_userVisibleUpdates;
    NSMutableArray *_configDataUpdates;
    NSMutableArray *_firmwareUpdates;
    NSMutableArray *_backgroundInstallCriticalUpdates;
    NSMutableArray *_registerForPostLogoutCriticalUpdates;
    NSMutableArray *_productsQueuedForStaging;
    NSMutableArray *_productsDownloadingInBackground;
    NSBackgroundActivityScheduler *_stageActivityScheduler;
    NSMutableSet *_errorUpdateKeys;
    NSMutableArray *_autoInstalledJournalEntries;
    char _timeToScan;
    char _canDownloadAndStage;
    char _wasScanIncomplete;
    NSError *_error;
    NSString *_catalogTestMode;
    struct AuthorizationOpaqueRef { } *_authRef;
    NSObject<OS_dispatch_queue> *_productStateQueue;
    NSObject<OS_dispatch_queue> *_backgroundOpsQueue;
    NSObject<OS_dispatch_queue> *_modifyAuthQueue;
}

@property long long numInflightOperations;
@property (retain) NSSet *previousIncompleteKeys;
@property (nonatomic) char suspended;

+ (id)sharedBackgroundManager;

- (void)dealloc;
- (id)init;
- (id)error;
- (void)resetState;
- (void)archiveToCoder:(id)a0;
- (void)evaluateAvailableUpdatesAndLog:(char)a0;
- (long long)_activityDelay;
- (id)_appropriateProductsForAction:(long long)a0;
- (void)_backgroundDownloadDidFinishForProduct:(id)a0;
- (char)_canDownloadAndStageUpdates;
- (char)_evaluateScanRequirements;
- (char)_isProductEligibleForAutoInstallOfRestartRequiredUpdates:(id)a0;
- (void)_markPendingCriticalUpdateForPostLogoutInstallIfAppropriate:(id)a0;
- (void)_performBackgroundConfigDataInstallForProduct:(id)a0;
- (id)_popProduct;
- (void)_pushProductToStage:(id)a0;
- (void)_reevaluateAvailableUpdatesIfNecessary;
- (void)_scheduleStagingForQueuedProducts;
- (char)_shouldStageUpdate:(id)a0;
- (void)_stageProducts:(id)a0 replyWhenDone:(id /* block */)a1;
- (void)addToAutoInstallJournalForProduct:(id)a0 wasAdminAutoInstall:(char)a1;
- (id)autoInstalledJournalEntries;
- (void)cancelBackgroundDownloadIfNecessaryForProductKeys:(id)a0 replyWhenDone:(id /* block */)a1;
- (void)clearAutoInstalledUpdates;
- (char)downloadAndStageUpdates:(id)a0 doDownload:(char)a1 notifyWhenFinished:(char)a2 inForeground:(char)a3 withReply:(id /* block */)a4;
- (void)downloadRecommendedUpdates;
- (char)downloadUpdates:(id)a0 notifyWhenFinished:(char)a1 inForeground:(char)a2 withReply:(id /* block */)a3;
- (id)incompleteProductKeys;
- (void)installStatus:(id)a0 didChangeExternallyForProductKey:(id)a1;
- (long long)nextActionForProductKey:(id)a0 returningProduct:(id *)a1;
- (void)restoreFromCoder:(id)a0;
- (void)setCatalogTestMode:(id)a0;
- (char)shouldRetryAheadOfSchedule;
- (char)synchronousRefreshAvailableUpdatesIfRequired;

@end
