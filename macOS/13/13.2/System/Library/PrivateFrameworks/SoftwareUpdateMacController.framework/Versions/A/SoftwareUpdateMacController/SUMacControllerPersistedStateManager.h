@class SUCoreFSM, SUCorePersistedState, NSObject;
@protocol OS_dispatch_queue;

@interface SUMacControllerPersistedStateManager : NSObject

@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;
@property (retain, nonatomic) SUCoreFSM *stateMachine;
@property (retain, nonatomic) SUCorePersistedState *persistedState;

+ (id)_getSUMacControllerPersistedStateManagerStateTable;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (long long)performAction:(id)a0 onEvent:(id)a1 inState:(id)a2 withInfo:(id)a3 nextState:(id)a4 error:(id *)a5;
- (void)_registerStateMachineHandlers;
- (long long)actionUnknownAction:(id)a0 error:(id *)a1;
- (void)persistDownloadFinishedForClient:(id)a0 updateUUID:(id)a1 descriptor:(id)a2 overrides:(id)a3;
- (void)persistPrepareStarted;
- (void)persistPrepareFinishedForClient:(id)a0 updateUUID:(id)a1 descriptor:(id)a2 overrides:(id)a3;
- (void)currentUpdateCancelled;
- (void)loadPersistedStateWithCompletion:(id /* block */)a0;
- (long long)actionPersistDownloadFinished:(id)a0 error:(id *)a1;
- (long long)actionPersistPrepareStarted:(id)a0 error:(id *)a1;
- (long long)actionPersistPrepareFinished:(id)a0 error:(id *)a1;
- (long long)actionPersistCancelledUpdate:(id)a0 error:(id *)a1;
- (long long)actionPersistLoadPersistedState:(id)a0 error:(id *)a1;
- (long long)actionPersistReloadAssets:(id)a0 error:(id *)a1;
- (id)_constructFromDescriptor:(id)a0 reloadedSU:(id)a1 reloadedBrain:(id)a2 reloadedSFR:(id)a3;
- (long long)actionPersistDecidePhase:(id)a0 error:(id *)a1;
- (long long)actionPersistLoadDownloaded:(id)a0 error:(id *)a1;
- (id)_isDownloadedMAAsset:(id)a0 assetDesc:(id)a1;
- (long long)actionPersistReportDownloadValid:(id)a0 error:(id *)a1;
- (long long)actionPersistLoadPrepared:(id)a0 error:(id *)a1;
- (long long)actionPersistReportPrepareValid:(id)a0 error:(id *)a1;
- (long long)actionPersistReportFailed:(id)a0 error:(id *)a1;
- (long long)actionPersistReportInvalid:(id)a0 error:(id *)a1;
- (void)_stateSafeResetPersistedState;
- (id)_stateSafeLoadPersistedState;
- (BOOL)_isPersistedStateAvailable;
- (id)_validatePersistedEvent:(id)a0;

@end
