@class NSError;

@interface OSIRepairDiskElement : OSIInstallQueueElement

@property (retain) NSError *error;
@property BOOL repairCompleted;

- (void).cxx_destruct;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (id)localizedStatusString;
- (double)estimatedTimeToComplete;
- (void)_disableQuotasForDiskWithMountPoint:(id)a0;
- (BOOL)_attemptRepair;
- (BOOL)_isVolumeInComplexAPFSContainer:(id)a0;
- (BOOL)_attemptVerify;
- (BOOL)_checkFilesystemAndRepair:(BOOL)a0;
- (id)_disksToUnmountForDisk:(id)a0;
- (id)unmountDisk:(id)a0 withOptions:(id)a1;
- (id)_skManager;

@end
