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
@property (nonatomic) char hasMigratedFromLegacy;
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
+ (void)_checkForiCloudMetadata;
+ (id)_currentiCloudAccount;
+ (id)_metadataURL;
+ (id)syncedFileForRelativePath:(id)a0;
+ (void)test_forgetAllSyncedFiles;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void)presentedItemDidChange;
- (void)presentedItemDidGainVersion:(id)a0;
- (void)presentedItemDidMoveToURL:(id)a0;
- (void)presentedItemDidResolveConflictVersion:(id)a0;
- (void)deleteFile;
- (char)_deleteLocalFileAndReturnError:(id *)a0;
- (id)_upgradedLegacyDataIsReachable:(char *)a0;
- (void)_clearMetadata;
- (char)_fileExistsInCloud;
- (void)_handleIdentityChange:(id)a0;
- (id)_iCloudAccount;
- (char)_mergeUpdateLocal:(char *)a0 error:(id *)a1;
- (id)_readPlistWithOptions:(unsigned long long)a0 error:(id *)a1;
- (void)_resolveConflicts;
- (void)_setiCloudAccount;
- (char)_signedInState;
- (char)_syncWithCloudPostNotification:(char)a0 error:(id *)a1;
- (id)_ubiquitousFileForVersion:(long long)a0;
- (char)_updateLocalPostNotification:(char)a0 didUpdate:(char *)a1 error:(id *)a2;
- (char)_waitForMetadata;
- (char)_writeData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (char)_writeDataAfterResolvingConflict:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (char)_writeDataLocally:(id)a0 options:(unsigned long long)a1 setMetadata:(char)a2 postNotification:(char)a3 error:(id *)a4;
- (char)_writeDataToCloud:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initWithRelativePath:(id)a0;
- (id)readDataWithOptions:(unsigned long long)a0;
- (id)readPlistWithOptions:(unsigned long long)a0;
- (void)writeData:(id)a0 options:(unsigned long long)a1;
- (void)writePlist:(id)a0 options:(unsigned long long)a1;

@end
