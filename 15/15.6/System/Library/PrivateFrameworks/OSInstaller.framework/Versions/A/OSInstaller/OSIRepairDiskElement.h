@class NSError;

@interface OSIRepairDiskElement : OSIInstallQueueElement

@property (retain) NSError *error;
@property char repairCompleted;

- (void).cxx_destruct;
- (id)operationName;
- (char)runReturningError:(id *)a0;
- (id)localizedStatusString;
- (char)_attemptRepair;
- (char)_attemptVerify;
- (char)_checkFilesystemAndRepair:(char)a0;
- (void)_disableQuotasForDiskWithMountPoint:(id)a0;
- (id)_disksToUnmountForDisk:(id)a0;
- (char)_isVolumeInComplexAPFSContainer:(id)a0;
- (id)_skManager;
- (double)estimatedTimeToComplete;
- (id)unmountDisk:(id)a0 withOptions:(id)a1;

@end
