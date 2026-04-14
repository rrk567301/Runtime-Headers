@class NSString, SUCoreFSM, SUCoreProgress, SUCoreDescriptor, NSDictionary, SUCorePolicy, NSObject, SUCoreMobileAsset;
@protocol SUCoreUpdateDownloaderDelegate, OS_dispatch_queue;

@interface SUCoreUpdateDownloader : NSObject <SUCoreMobileAssetDelegate, SUCoreFSMDelegate>

@property (retain, nonatomic) SUCorePolicy *policy;
@property (readonly, retain, nonatomic) SUCoreDescriptor *updateDescriptor;
@property (readonly, weak, nonatomic) id<SUCoreUpdateDownloaderDelegate> delegate;
@property (readonly, retain, nonatomic) NSString *updateUUID;
@property (readonly, retain, nonatomic) NSDictionary *stateTable;
@property (readonly, retain, nonatomic) SUCoreFSM *downloadFSM;
@property (readonly, retain, nonatomic) SUCoreMobileAsset *maControl;
@property (readonly, retain, nonatomic) SUCoreMobileAsset *maControlSplombo;
@property (readonly, nonatomic) BOOL shouldDownloadSplat;
@property (retain, nonatomic) SUCoreProgress *unifiedProgress;
@property (nonatomic) unsigned long long totalToWriteBytesForPhase;
@property (nonatomic) unsigned long long totalWrittenBytesUpToLastPhase;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *delegateCallBackQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_generateStateTable;

- (void).cxx_destruct;
- (long long)actionUnknownAction:(id)a0 error:(id *)a1;
- (void)maAnomaly:(id)a0;
- (void)maDownloadFailed:(id)a0;
- (void)maDownloadProgress:(id)a0;
- (void)maDownloadStalled:(id)a0;
- (void)maDownloaded:(id)a0;
- (long long)performAction:(id)a0 onEvent:(id)a1 inState:(id)a2 withInfo:(id)a3 nextState:(id)a4 error:(id *)a5;
- (long long)actionDownloadPSUSAssets:(id)a0 error:(id *)a1;
- (BOOL)_isPreSUStagingEnabled;
- (BOOL)_shouldStageOptionalPSUSAssets;
- (void)_skipCurrentOperationFor:(id)a0;
- (void)_trackAnomaly:(id)a0 reason:(id)a1 result:(long long)a2 error:(id)a3;
- (long long)actionDownloadSU:(id)a0 error:(id *)a1;
- (long long)actionDownloadSplat:(id)a0 error:(id *)a1;
- (long long)actionRemovePSUSAssets:(id)a0 error:(id *)a1;
- (long long)actionRemoveSU:(id)a0 error:(id *)a1;
- (long long)actionRemoveSplat:(id)a0 error:(id *)a1;
- (long long)actionReportDownloadProgress:(id)a0 error:(id *)a1;
- (long long)actionReportDownloadStalled:(id)a0 error:(id *)a1;
- (long long)actionReportUpdateDownloaded:(id)a0 error:(id *)a1;
- (long long)actionReportUpdateFailedToDownload:(id)a0 error:(id *)a1;
- (long long)actionReportUpdateFailedToRemove:(id)a0 error:(id *)a1;
- (long long)actionReportUpdateRemoved:(id)a0 error:(id *)a1;
- (void)alterPolicy:(id)a0;
- (void)downloadUpdateWithPolicy:(id)a0;
- (id)initWithDelegate:(id)a0 forUpdate:(id)a1 updateUUID:(id)a2;
- (void)maAssetRemoveFailed:(id)a0;
- (void)maAssetRemoved;
- (void)removeUpdate;

@end
