@class NSString, PLBackgroundResourceUploadExtensionHost;

@interface PLBackgroundJobResourceUploadExtensionRunnerWorker : PLBackgroundJobWorker {
    PLBackgroundResourceUploadExtensionHost *_host;
    long long _countOfPreProcessingAcknowledgedJobs;
    BOOL _canceled_lock_isCanceled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _canceled_lock;
    BOOL _disableConfigurationDelay;
    BOOL _reducedConfigurationDelay;
}

@property (copy) NSString *currentBundleIdentifier;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)_enabledJobConfigurationRequest;
+ (BOOL)checkServerFeatureVersionForLibraryServicesManager:(id)a0;
+ (id)fetchConfigurationEnabledBundleIdentifiersForLibraryServicesManager:(id)a0;
+ (BOOL)isBackgroundAppRefreshEnabledWithBundleIdentifiers:(id)a0 libraryServicesManager:(id)a1;
+ (BOOL)isEnabledForBundle:(id)a0;

- (BOOL)isInterruptible;
- (id)workItemsNeedingProcessingInLibrary:(id)a0 validCriterias:(id)a1;
- (void).cxx_destruct;
- (void)stopWorkingOnItem:(id)a0;
- (id)initWithLibraryBundle:(id)a0;
- (BOOL)_isJobCancelled;
- (unsigned long long)type;
- (void)dealloc;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (void)_bumpAttemptCountForConfiguration:(id)a0;
- (void)_checkConfigurationStateAndUpdateIfNeededInLibrary:(id)a0;
- (BOOL)_confirmCompletedAcknowledgedForConfiguration:(id)a0 library:(id)a1;
- (BOOL)_confirmCountOfStatesForConfiguration:(id)a0 states:(id)a1 library:(id)a2;
- (BOOL)_confirmProcessingAcknowledgedCompletionResultsForConfiguration:(id)a0 library:(id)a1;
- (BOOL)_confirmProcessingCompletionResultsForConfiguration:(id)a0 library:(id)a1;
- (id)_enabledJobConfigurationsForProcessingInLibrary:(id)a0 delay:(double *)a1;
- (id)_errorFromProcessingResult:(unsigned long long)a0;
- (id)_eventMonitorJobConfigurationsInLibrary:(id)a0;
- (void)_handleProcessingResult:(unsigned long long)a0 bundleIdentifier:(id)a1 library:(id)a2 completionBlock:(id /* block */)a3;
- (double)_isConfigurationDelayedWithConfiguration:(id)a0;
- (void)_removeWorkItemForConfigurationIdentifier:(id)a0 library:(id)a1;
- (void)_resetAttemptCountForConfiguration:(id)a0;
- (void)_switchConfiguration:(id)a0 toState:(short)a1;
- (void)_updateConfigurationStateWithWorkItemIdentifiers:(id)a0 configurations:(id)a1 inLibrary:(id)a2;
- (BOOL)_validateConfiguration:(id)a0 delay:(double *)a1;
- (id)_workItemIdentifiersInLibrary:(id)a0;
- (void)configurationWillBeDeleted:(id)a0;

@end
