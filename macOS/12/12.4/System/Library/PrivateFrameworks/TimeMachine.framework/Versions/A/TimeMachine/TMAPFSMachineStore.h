@class NSString, NSArray, NSURL, TMBackup, TMDisk, NSDictionary;

@interface TMAPFSMachineStore : TMMachineStore <TMBackupStoreRoot>

@property (retain) TMDisk *liveVolumeDisk;
@property (readonly) NSURL *machineStoreURL;
@property (readonly) NSURL *inheritanceHistoryURL;
@property (readonly) NSURL *liveVolumeMountPoint;
@property (readonly) TMBackup *baselineBackupCandidate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSArray *sortedCompleteBackups;
@property (readonly) NSDictionary *backupHistoryDictionary;
@property (readonly) NSArray *backupDateHistory;

+ (id)structureType;
+ (id)annotatedStateAtURL:(id)a0;
+ (id)URLForBuildUnderURL:(id)a0 error:(id *)a1;
+ (void)enumerateURLsForReuseUnderURL:(id)a0 enumerator:(id /* block */)a1;
+ (BOOL)validateMachineStoreAttributesAtURL:(id)a0;
+ (BOOL)_makeMachineStoreDirectoryAtURL:(id)a0 error:(id *)a1;
+ (id)machineAddress;
+ (BOOL)addMachineStoreRootACLsToURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (BOOL)buildAtURL:(id)a0 parentURL:(id)a1 error:(id *)a2;
- (long long)refreshFromDisk;
- (id)computerName;
- (BOOL)prepareForReuse:(id *)a0;
- (id)sortedWritableBackupsWithState:(unsigned long long)a0;
- (id)prepareAllBackupsForBrowsing:(id *)a0;
- (id)prepareBackupForBrowsingWithDate:(id)a0 error:(id *)a1;
- (id)prepareLegacyBackupsDB:(id *)a0;
- (BOOL)finishBrowsingBackups:(id *)a0;
- (BOOL)rename:(id)a0 error:(id *)a1;
- (BOOL)_updateMachineStoreNameAtURL:(id)a0 previousComputerName:(id)a1 error:(id *)a2;
- (Class)snapshotClass;
- (id)machineUUID;
- (id)_readOnlyBackups;
- (id)completedBackups;
- (BOOL)revertToBackup:(id)a0 error:(id *)a1;

@end
