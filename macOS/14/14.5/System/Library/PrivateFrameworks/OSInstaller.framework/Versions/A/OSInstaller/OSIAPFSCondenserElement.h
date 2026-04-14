@class NSError;

@interface OSIAPFSCondenserElement : OSIInstallQueueElement

@property (retain) NSError *error;

- (void).cxx_destruct;
- (id)operationName;
- (BOOL)runReturningError:(id *)a0;
- (id)localizedStatusString;
- (double)estimatedTimeToComplete;
- (id)_diskForVolumeUUID:(id)a0;
- (void)_logOpenFileDescriptorsOnMountPoint:(id)a0;
- (BOOL)_performCondenserWithSoftFail:(BOOL *)a0;
- (BOOL)_remapTargetForSystemUUID:(id)a0 withDataUUID:(id)a1 withError:(id *)a2;
- (id)_skManager;
- (id)pidsForProcessName:(id)a0;

@end
