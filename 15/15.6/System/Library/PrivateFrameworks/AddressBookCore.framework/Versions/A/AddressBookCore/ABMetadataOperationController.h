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
+ (void)cancelAllOperations;
+ (id)operationQueue;
+ (void)waitUntilAllOperationsAreFinished;
+ (id)checksumMode;
+ (void)couldNotOpenMetadataFileLock:(id)a0 error:(id)a1;
+ (char)currentProcessIsWhitelistedForMetadataValidation;
+ (id)futureSharedInstanceForAddressBook:(id)a0;
+ (id)sharedIgnoredDirectories;
+ (id)sharedInstanceForAddressBook:(id)a0;
+ (char)shouldDisableValidation;
+ (BOOL)waitForOperations:(id)a0 toFinishWithTimeout:(double)a1;
+ (char)waitUntilAllOperationsAreFinishedWithTimeout:(double)a0;

- (void).cxx_destruct;
- (void)addOperation:(id)a0;
- (char)isRunning;
- (char)isSuspended;
- (void)setSuspended:(char)a0;
- (void)markPersonWithUniqueIdAsViewed:(id)a0;
- (void)processRecords:(id)a0;
- (long long)lastChangeCount;
- (void)stopImmediately;
- (void)_postpone;
- (void)addUniqueIdsMissingFromSet:(id)a0 toArray:(id)a1 forClass:(Class)a2 prefetch:(char)a3 inAddressBook:(id)a4;
- (id)addressBook;
- (void)completed:(id)a0 forType:(unsigned long long)a1;
- (id)currentChecksumForDatabase;
- (id)currentChecksumForDirectory:(id)a0;
- (char)hasRecordsInMetaDataCache;
- (id)initWithAddressBook:(id)a0;
- (id)initWithAddressBook:(id)a0 ignoredDirectories:(id)a1;
- (void)init_prepareMetadataDirectory;
- (void)init_prepareMetadataLock;
- (id)keyForType:(unsigned long long)a0;
- (char)lockInfo;
- (void)manageMetadataForRecords:(id)a0 action:(unsigned long long)a1;
- (void)markPersonAsViewed:(id)a0;
- (void)markPersonWithUniqueIdAsViewed:(id)a0 secondTry:(char)a1;
- (void)markViewedForRecord:(id)a0 tryAgain:(char)a1;
- (id)metaDataCacheDirectory;
- (id)metaDataCacheFilenameForUID:(id)a0;
- (id)metaDataCachePathForUID:(id)a0;
- (id)metaDataLockFile;
- (id)metaDataLockFileProxy;
- (void)metadataInfoFile:(id)a0 willWriteDataWithLength:(unsigned long long)a1 toURL:(id)a2;
- (char)nts_RestoreFromMetaData;
- (char)nts_RestoreFromMetaDataAndTriggerSync:(char)a0;
- (id)opsForType:(unsigned long long)a0;
- (void)planToComplete:(id)a0 forType:(unsigned long long)a1;
- (void)postpone;
- (void)removeDuplicates:(id)a0;
- (void)removeDuplicatesForType:(unsigned long long)a0;
- (void)removeMetadataForRecordWithUniqueId:(id)a0 quantumBaseURLs:(id)a1;
- (void)reportDelinquentUIDs:(id)a0 forJobType:(unsigned long long)a1;
- (void)resetMetaData;
- (char)restoreFromMetaData;
- (void)runIgnoringUpdates:(id /* block */)a0;
- (void)setLastChangeCount:(long long)a0;
- (char)shouldIgnoreUpdates;
- (void)stamp;
- (void)stateOfTheMetadata;
- (void)unlockInfo;
- (void)validateAllMetaDataForceRebuild:(char)a0;
- (void)validateMetaDataIfNeeded;
- (id)viewedDateForPerson:(id)a0;
- (id)viewedDateForRecordWithUniqueId:(id)a0;
- (void)waitForThreadsToFinish;
- (void)waitForThreadsToFinishWithTimeout:(double)a0;
- (void)wipeMetaDataDirectory;
- (void)writeMetadata:(id)a0 toURL:(id)a1;
- (void)writeOutInfo;

@end
