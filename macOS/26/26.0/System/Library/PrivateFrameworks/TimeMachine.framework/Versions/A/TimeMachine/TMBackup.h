@class NSString, NSArray, NSURL, NSDate, NSNumber, NSObject;
@protocol TMFileEndOfLifeProtocol;

@interface TMBackup : TMStructure <TMAdoptableStructure, TMMountableBackupProtocol, TMMountedBackupProtocol> {
    NSString *_snapshotVolumeIdentifier;
    int _snapshotState;
    NSNumber *_totalBytesCopied;
    NSNumber *_snapshotNumber;
    NSNumber *_backupVersion;
}

@property (class, readonly) NSNumber *currentBackupVersion;
@property (class, readonly) unsigned short standardDirectoryPermissions;
@property (class, readonly) unsigned long long standardDirectoryCreationOptions;
@property (class, retain) NSObject<TMFileEndOfLifeProtocol> *fileEndOfLifeHandler;

@property (readonly) NSString *snapshotPath;
@property (readonly) NSString *name;
@property (readonly) unsigned long long state;
@property (readonly) BOOL isComplete;
@property (readonly) NSDate *attemptStartDate;
@property (readonly) unsigned long long attemptStartEventID;
@property (readonly) unsigned long long attemptStartFileID;
@property (readonly) NSDate *dateStarted;
@property (readonly) NSDate *dateCompleted;
@property (readonly) unsigned long long dateStartedAsInt;
@property (readonly) unsigned long long dateCompletedAsInt;
@property BOOL isInWorkingSet;
@property (readonly) NSArray *children;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSURL *rootURL;
@property (readonly) NSURL *expectedBackupURL;
@property (readonly) unsigned long long maximumFileID;
@property (readonly) NSURL *url;

+ (id)structureType;
+ (id)URLForBuildUnderURL:(id)a0 error:(id *)a1;
+ (id)annotatedStateAtURL:(id)a0;
+ (BOOL)deleteBackupAtURL:(id)a0 bytesDeleted:(unsigned long long *)a1 willUnlinkBlock:(id /* block */)a2 cancelBlock:(id /* block */)a3 error:(id *)a4;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isMounted;
- (BOOL)finishBrowsing:(id *)a0;
- (long long)refreshFromDisk;
- (unsigned long long)_backupStateFromLegacySnapshotState;
- (id)_dateFromDateInt:(unsigned long long)a0;
- (int)_legacySnapshotState;
- (int)_markForDeletion;
- (BOOL)_setLegacySnapshotStateFromBackupState:(unsigned long long)a0 error:(id *)a1;
- (id)backupVersion;
- (BOOL)buildAtURL:(id)a0 parentURL:(id)a1 error:(id *)a2;
- (id)deleteFromDiskWithCancelBlock:(id /* block */)a0 error:(id *)a1;
- (BOOL)isNewerThanSnapshot:(id)a0;
- (id)moveUnderURL:(id)a0 newParent:(id)a1 error:(id *)a2;
- (id)readyForBrowsingWithOptions:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setBackupState:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setBackupVersion:(id)a0 error:(id *)a1;
- (BOOL)setSnapshotNumber:(id)a0;
- (id)snapshotNumber;
- (id)totalBytesCopied;
- (BOOL)updateMaximumFileID:(id *)a0;
- (id)volumeStoreForVolumeUUID:(id)a0;
- (id)volumeStoreVolumeUUIDs;
- (id)volumeStores;

@end
