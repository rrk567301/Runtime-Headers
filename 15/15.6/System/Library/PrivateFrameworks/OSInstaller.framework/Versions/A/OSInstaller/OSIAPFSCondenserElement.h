@class NSError;

@interface OSIAPFSCondenserElement : OSIInstallQueueElement

@property (retain) NSError *error;

- (void).cxx_destruct;
- (id)operationName;
- (char)runReturningError:(id *)a0;
- (id)localizedStatusString;
- (id)_diskForVolumeUUID:(id)a0;
- (void)_logOpenFileDescriptorsOnMountPoint:(id)a0;
- (char)_performCondenserWithSoftFail:(char *)a0;
- (char)_remapTargetForSystemUUID:(id)a0 withDataUUID:(id)a1 withError:(id *)a2;
- (id)_skManager;
- (double)estimatedTimeToComplete;
- (id)pidsForProcessName:(id)a0;

@end
