@class NSString, NSArray, NSDictionary, TMInProgressContainer, NSDate;

@interface TMMachineStore : TMMonoStructure <TMCompleteBackupProvider, TMWritableBackupProvider, TMMachineStoreInfo>

@property (class, readonly) NSString *machineAddress;

@property (readonly) Class snapshotClass;
@property (retain) TMInProgressContainer *inProgressContainer;
@property (readonly) NSArray *sortedCompleteBackups;
@property (readonly) NSDictionary *backupHistoryDictionary;
@property (readonly) NSArray *backupDateHistory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *name;
@property (readonly) NSString *hostUUID;
@property (readonly) NSString *hardwareModelIdentifier;
@property (readonly) NSDate *latestCompleteBackupDate;

+ (id)structureType;
+ (id)URLForBuildUnderURL:(id)a0 error:(id *)a1;
+ (id)_findValidURLForMachineStoreUnderURL:(id)a0 error:(id *)a1;
+ (char)_makeMachineStoreDirectoryAtURL:(id)a0 error:(id *)a1;
+ (id)annotatedStateAtURL:(id)a0;
+ (char)machineStoreAttributesExistAtURL:(id)a0;
+ (char)machineStoreAttributesMatchCurrentMachineAtURL:(id)a0;
+ (char)machineStoreAttributesMatchHostUUIDs:(id)a0 macAddresses:(id)a1 atURL:(id)a2;
+ (char)setMachineStoreAttributesAtURL:(id)a0 error:(id *)a1;
+ (char)validateMachineStoreAttributesAtURL:(id)a0;

- (void).cxx_destruct;
- (long long)refreshFromDisk;
- (id)sortedWritableBackupsWithState:(unsigned long long)a0;
- (char)_updateMachineStoreNameAtURL:(id)a0 previousComputerName:(id)a1 error:(id *)a2;
- (id)baselineBackupCandidate;
- (char)buildAtURL:(id)a0 parentURL:(id)a1 error:(id *)a2;
- (void)didAdoptChildStructure:(id)a0;
- (Class)inProgressContainerClass;
- (id)latestCompleteBackupInfo;
- (id)latestWritableBackupWithState:(unsigned long long)a0;
- (id)prepareBackupForBrowsingWithDate:(id)a0 error:(id *)a1;
- (char)prepareForReuse:(id *)a0;
- (id)removeInProgressBackups:(id *)a0;

@end
