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
+ (id)annotatedStateAtURL:(id)a0;
+ (id)URLForBuildUnderURL:(id)a0 error:(id *)a1;
+ (BOOL)validateMachineStoreAttributesAtURL:(id)a0;
+ (id)_findValidURLForMachineStoreUnderURL:(id)a0 error:(id *)a1;
+ (BOOL)setMachineStoreAttributesAtURL:(id)a0 error:(id *)a1;
+ (BOOL)_makeMachineStoreDirectoryAtURL:(id)a0 error:(id *)a1;
+ (BOOL)machineStoreAttributesMatchCurrentMachineAtURL:(id)a0;
+ (BOOL)machineStoreAttributesMatchHostUUIDs:(id)a0 macAddresses:(id)a1 atURL:(id)a2;
+ (BOOL)machineStoreAttributesExistAtURL:(id)a0;

- (void).cxx_destruct;
- (BOOL)buildAtURL:(id)a0 parentURL:(id)a1 error:(id *)a2;
- (long long)refreshFromDisk;
- (BOOL)prepareForReuse:(id *)a0;
- (id)sortedWritableBackupsWithState:(unsigned long long)a0;
- (id)latestWritableBackupWithState:(unsigned long long)a0;
- (id)baselineBackupCandidate;
- (id)removeInProgressBackups:(id *)a0;
- (void)didAdoptChildStructure:(id)a0;
- (BOOL)_updateMachineStoreNameAtURL:(id)a0 previousComputerName:(id)a1 error:(id *)a2;
- (Class)inProgressContainerClass;
- (id)latestCompleteBackupInfo;

@end
