@class NSSet, NSString, NSURL, NSOperationQueue, NSObject;
@protocol OS_os_log;

@interface MFSyncedFile : NSObject <NSFilePresenter> {
    NSURL *_cloudURL;
    id _cloudURLLock;
    id _cloudFileLock;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) NSURL *URL;
@property (readonly) NSURL *cloudURL;
@property (nonatomic) BOOL hasMigratedFromLegacy;
@property long long syncState;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_metadata;
+ (void)_setMetadata:(id)a0;
+ (id)_metadataURL;
+ (id)syncedFileForRelativePath:(id)a0;
+ (id)_currentiCloudAccount;
+ (void)test_forgetAllSyncedFiles;
+ (void)_checkForiCloudMetadata;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void)presentedItemDidMoveToURL:(id)a0;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(id)a0;
- (void)presentedItemDidResolveConflictVersion:(id)a0;
- (id)initWithRelativePath:(id)a0;
- (id)_iCloudAccount;
- (void)_handleIdentityChange:(id)a0;
- (void)_setiCloudAccount;
- (BOOL)_signedInState;
- (void)_clearMetadata;
- (void)writeData:(id)a0 options:(unsigned long long)a1;
- (BOOL)_writeData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_writeDataAfterResolvingConflict:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_writeDataLocally:(id)a0 options:(unsigned long long)a1 setMetadata:(BOOL)a2 postNotification:(BOOL)a3 error:(id *)a4;
- (id)readDataWithOptions:(unsigned long long)a0;
- (void)writePlist:(id)a0 options:(unsigned long long)a1;
- (id)readPlistWithOptions:(unsigned long long)a0;
- (id)_readPlistWithOptions:(unsigned long long)a0 error:(id *)a1;
- (void)deleteFile;
- (BOOL)_deleteLocalFileAndReturnError:(id *)a0;
- (BOOL)_syncWithCloudPostNotification:(BOOL)a0 error:(id *)a1;
- (BOOL)_waitForMetadata;
- (BOOL)_mergeUpdateLocal:(BOOL *)a0 error:(id *)a1;
- (BOOL)_updateLocalPostNotification:(BOOL)a0 didUpdate:(BOOL *)a1 error:(id *)a2;
- (id)_upgradedLegacyDataIsReachable:(BOOL *)a0;
- (BOOL)_writeDataToCloud:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_fileExistsInCloud;
- (id)_ubiquitousFileForVersion:(long long)a0;
- (void)_resolveConflicts;

@end
