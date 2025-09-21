@class NSDate, NSString, CPLSyncSession, CPLScopeFilter, CPLEngineSyncTask, NSEnumerator, CPLEngineLibrary, CPLBackgroundActivity, NSObject;
@protocol CPLSyncSessionConfiguration, CPLEngineForceSyncTaskDelegate, CPLEngineStoreUserIdentifier, OS_dispatch_queue;

@interface CPLEngineForceSyncTask : CPLForceSyncTask <CPLEngineSyncTaskDelegate, CPLSyncSessionConfiguration> {
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _currentTaskLock;
    char _reallyLaunched;
    char _reallyCancelled;
    CPLEngineSyncTask *_currentTask;
    CPLSyncSession *_fakeSession;
    NSEnumerator *_syncTaskEnumerator;
    id<CPLSyncSessionConfiguration> _configuration;
}

@property (retain, nonatomic) id<CPLEngineStoreUserIdentifier> transportUserIdentifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) CPLScopeFilter *filter;
@property (retain, nonatomic) CPLEngineLibrary *engineLibrary;
@property (weak, nonatomic) id<CPLEngineForceSyncTaskDelegate> delegate;
@property (copy, nonatomic) id /* block */ taskDidFinishWithErrorBlock;
@property (retain, nonatomic) CPLBackgroundActivity *taskActivity;
@property (readonly, nonatomic) char forBackup;
@property (readonly, nonatomic) char forDownload;
@property (readonly, nonatomic) char forcingProcessedStagedScopes;
@property (nonatomic) char bypassForceSyncLimitations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) char allowsLocalConflictResolutionWhenOverQuota;
@property (readonly) char allowsLocalConflictResolution;
@property (readonly) long long maximumComputeStatesToUploadPerBatch;
@property (readonly) char isComputeStateTaskUploadEnabled;
@property (readonly, nonatomic) char shouldCheckEPPCapability;

- (void)dealloc;
- (void).cxx_destruct;
- (id)redactedDescription;
- (void)_finishWithError:(id)a0;
- (void)task:(id)a0 didFinishWithError:(id)a1;
- (void)cancelTask;
- (id)_phaseDescription;
- (id)_currentTask;
- (void)_dispatchNextSyncTask;
- (void)_dispatchSyncTask:(id)a0;
- (void)_dropCurrentTask;
- (id)initWithScopeIdentifiers:(id)a0 engineLibrary:(id)a1 filter:(id)a2 delegate:(id)a3;
- (void)launchTask;
- (void)reallyCancel;
- (void)reallyLaunch;
- (void)task:(id)a0 didProgress:(float)a1 userInfo:(id)a2;

@end
