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
+ (BOOL)shouldDisableValidation;
+ (id)sharedIgnoredDirectories;
+ (id)futureSharedInstanceForAddressBook:(id)a0;
+ (id)sharedInstanceForAddressBook:(id)a0;
+ (id)checksumMode;
+ (void)couldNotOpenMetadataFileLock:(id)a0 error:(id)a1;
+ (BOOL)waitUntilAllOperationsAreFinishedWithTimeout:(double)a0;
+ (BOOL)waitForOperations:(id)a0 toFinishWithTimeout:(double)a1;
+ (BOOL)currentProcessIsWhitelistedForMetadataValidation;

- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (void)setSuspended:(BOOL)a0;
- (BOOL)isSuspended;
- (BOOL)isRunning;
- (id)initWithAddressBook:(id)a0;
- (id)addressBook;
- (void)metadataInfoFile:(id)a0 willWriteDataWithLength:(unsigned long long)a1 toURL:(id)a2;
- (BOOL)lockInfo;
- (void)unlockInfo;
- (void)stamp;
- (void)planToComplete:(id)a0 forType:(unsigned long long)a1;
- (void)completed:(id)a0 forType:(unsigned long long)a1;
- (void)writeMetadata:(id)a0 toURL:(id)a1;
- (void)removeMetadataForRecordWithUniqueId:(id)a0 quantumBaseURLs:(id)a1;
- (void)markViewedForRecord:(id)a0 tryAgain:(BOOL)a1;
- (void)validateAllMetaDataForceRebuild:(BOOL)a0;
- (void)reportDelinquentUIDs:(id)a0 forJobType:(unsigned long long)a1;
- (id)metaDataLockFile;
- (id)metaDataLockFileProxy;
- (id)metaDataCacheDirectory;
- (id)metaDataCacheFilenameForUID:(id)a0;
- (id)metaDataCachePathForUID:(id)a0;
- (id)currentChecksumForDirectory:(id)a0;
- (id)currentChecksumForDatabase;
- (id)initWithAddressBook:(id)a0 ignoredDirectories:(id)a1;
- (void)init_prepareMetadataDirectory;
- (void)init_prepareMetadataLock;
- (void)_postpone;
- (void)postpone;
- (void)writeOutInfo;
- (id)keyForType:(unsigned long long)a0;
- (id)opsForType:(unsigned long long)a0;
- (void)removeDuplicatesForType:(unsigned long long)a0;
- (void)removeDuplicates:(id)a0;
- (void)addUniqueIdsMissingFromSet:(id)a0 toArray:(id)a1 forClass:(Class)a2 prefetch:(BOOL)a3 inAddressBook:(id)a4;
- (BOOL)hasRecordsInMetaDataCache;
- (void)processRecords:(id)a0;
- (void)markPersonWithUniqueIdAsViewed:(id)a0 secondTry:(BOOL)a1;
- (void)markPersonAsViewed:(id)a0;
- (void)markPersonWithUniqueIdAsViewed:(id)a0;
- (id)viewedDateForRecordWithUniqueId:(id)a0;
- (id)viewedDateForPerson:(id)a0;
- (void)resetMetaData;
- (void)validateMetaDataIfNeeded;
- (long long)lastChangeCount;
- (void)setLastChangeCount:(long long)a0;
- (void)wipeMetaDataDirectory;
- (void)stateOfTheMetadata;
- (BOOL)restoreFromMetaData;
- (BOOL)nts_RestoreFromMetaData;
- (BOOL)nts_RestoreFromMetaDataAndTriggerSync:(BOOL)a0;
- (void)stopImmediately;
- (void)waitForThreadsToFinish;
- (void)waitForThreadsToFinishWithTimeout:(double)a0;
- (void)runIgnoringUpdates:(id /* block */)a0;
- (BOOL)shouldIgnoreUpdates;
- (void)manageMetadataForRecords:(id)a0 action:(unsigned long long)a1;

@end
