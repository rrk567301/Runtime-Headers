@class NSString, ABMetadataOperationSanityChecker, ABAddressBook, NSMutableDictionary, ABMetadataInfoFile, NSOperationQueue, NSObject, CNProcessSharedLock, ABMetadataIgnoredDirectories;
@protocol OS_os_log;

@interface ABMetadataOperationController : NSObject <ABMetadataInfoFileDelegate, ABMetadataManager> {
    CNProcessSharedLock *_metadataSharedLock;
    NSString *_metadataDirectory;
    ABMetadataInfoFile *_infoFile;
    ABAddressBook *_addressBook;
    NSOperationQueue *_queue;
    unsigned long long _suspended;
    NSMutableDictionary *_delinquentRecords;
    ABMetadataIgnoredDirectories *_ignoredDirectories;
    ABMetadataOperationSanityChecker *_sanityChecker;
}

@property (class, readonly) NSObject<OS_os_log> *os_log;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)operationQueue;
+ (void)cancelAllOperations;
+ (void)waitUntilAllOperationsAreFinished;
+ (id)sharedInstanceForAddressBook:(id)a0;
+ (BOOL)shouldDisableValidation;
+ (id)checksumMode;
+ (id)sharedIgnoredDirectories;
+ (void)couldNotOpenMetadataFileLock:(id)a0 error:(id)a1;
+ (BOOL)waitForOperations:(id)a0 toFinishWithTimeout:(double)a1;
+ (BOOL)currentProcessIsWhitelistedForMetadataValidation;
+ (id)futureSharedInstanceForAddressBook:(id)a0;
+ (BOOL)waitUntilAllOperationsAreFinishedWithTimeout:(double)a0;

- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (void)setSuspended:(BOOL)a0;
- (BOOL)isSuspended;
- (BOOL)isRunning;
- (id)initWithAddressBook:(id)a0;
- (id)addressBook;
- (id)metaDataCacheDirectory;
- (id)metaDataLockFile;
- (id)metaDataCacheFilenameForUID:(id)a0;
- (id)initWithAddressBook:(id)a0 ignoredDirectories:(id)a1;
- (void)init_prepareMetadataDirectory;
- (id)metaDataLockFileProxy;
- (void)init_prepareMetadataLock;
- (void)_postpone;
- (id)currentChecksumForDirectory:(id)a0;
- (void)writeOutInfo;
- (id)keyForType:(long long)a0;
- (id)opsForType:(int)a0;
- (void)removeDuplicates:(id)a0;
- (id)metaDataCachePathForUID:(id)a0;
- (BOOL)shouldIgnoreUpdates;
- (void)manageMetadataForRecords:(id)a0 action:(int)a1;
- (void)markPersonWithUniqueIdAsViewed:(id)a0 secondTry:(BOOL)a1;
- (id)viewedDateForRecordWithUniqueId:(id)a0;
- (id)currentChecksumForDatabase;
- (BOOL)lockInfo;
- (void)wipeMetaDataDirectory;
- (long long)lastChangeCount;
- (void)removeDuplicatesForType:(int)a0;
- (void)addUniqueIdsMissingFromSet:(id)a0 toArray:(id)a1 forClass:(Class)a2 prefetch:(BOOL)a3 inAddressBook:(id)a4;
- (void)unlockInfo;
- (BOOL)nts_RestoreFromMetaData;
- (BOOL)nts_RestoreFromMetaDataAndTriggerSync:(BOOL)a0;
- (void)runIgnoringUpdates:(id /* block */)a0;
- (void)metadataInfoFile:(id)a0 willWriteDataWithLength:(unsigned long long)a1 toURL:(id)a2;
- (void)stamp;
- (void)planToComplete:(id)a0 forType:(int)a1;
- (void)completed:(id)a0 forType:(int)a1;
- (void)writeMetadata:(id)a0 toURL:(id)a1;
- (void)removeMetadataForRecordWithUniqueId:(id)a0 quantumBaseURLs:(id)a1;
- (void)markViewedForRecord:(id)a0 tryAgain:(BOOL)a1;
- (void)validateAllMetaDataForceRebuild:(BOOL)a0;
- (void)reportDelinquentUIDs:(id)a0 forJobType:(int)a1;
- (void)postpone;
- (BOOL)hasRecordsInMetaDataCache;
- (void)processRecords:(id)a0;
- (void)markPersonAsViewed:(id)a0;
- (void)markPersonWithUniqueIdAsViewed:(id)a0;
- (id)viewedDateForPerson:(id)a0;
- (void)resetMetaData;
- (void)validateMetaDataIfNeeded;
- (void)setLastChangeCount:(long long)a0;
- (void)stateOfTheMetadata;
- (BOOL)restoreFromMetaData;
- (void)stopImmediately;
- (void)waitForThreadsToFinish;
- (void)waitForThreadsToFinishWithTimeout:(double)a0;

@end
