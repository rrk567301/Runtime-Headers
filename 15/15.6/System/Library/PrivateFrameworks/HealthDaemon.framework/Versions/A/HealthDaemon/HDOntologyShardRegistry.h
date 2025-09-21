@class NSMutableDictionary, NSString, HDAssertionManager, NSURL, HDOntologyUpdateCoordinator, NSObject, HDDaemon;
@protocol OS_dispatch_queue;

@interface HDOntologyShardRegistry : NSObject <HDAssertionObserver> {
    NSURL *_stagingDirectoryURL;
    NSObject<OS_dispatch_queue> *_cachedFileHandlesAssertionQueue;
    HDAssertionManager *_cachedFileHandlesAssertionManager;
    NSMutableDictionary *_cachedFileHandles;
}

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;
@property (readonly, nonatomic) HDDaemon *daemon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)importedMercuryZipTSVEntriesWithTransaction:(id)a0 error:(id *)a1;
+ (char)insertEntry:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)nextAvailableMercuryZipTSVSlotWithTransaction:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (char)copyToStagingDirectoryFileWithLocalURL:(id)a0 entry:(id)a1 error:(id *)a2;
- (char)deleteStagedFilesNotMatchingEntries:(id)a0 error:(id *)a1;
- (char)deleteStagedShardFileForEntry:(id)a0 error:(id *)a1;
- (id)entriesWithPredicate:(id)a0 orderingTerms:(id)a1 error:(id *)a2;
- (char)entryWithIdentifier:(id)a0 schemaType:(id)a1 schemaVersion:(long long)a2 entryOut:(id *)a3 transaction:(id)a4 error:(id *)a5;
- (char)enumerateEntriesWithPredicate:(id)a0 orderingTerms:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (char)insertEntries:(id)a0 error:(id *)a1;
- (char)insertEntry:(id)a0 error:(id *)a1;
- (char)moveStagedShardFileForEntry:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)openShardFileForEntry:(id)a0 error:(id *)a1;
- (long long)purgeSpaceForStagedShards;
- (long long)purgeableSpaceForStagedShards;
- (char)stageShardFileWithLocalURL:(id)a0 entry:(id)a1 error:(id *)a2;
- (id)stagedShardFileEntriesWithError:(id *)a0;
- (char)stagedShardFileEntryForEntry:(id)a0 entryOut:(id *)a1 error:(id *)a2;
- (id)takeFileHandleAssertionForOwnerIdentifier:(id)a0 error:(id *)a1;
- (id)unitTesting_cachedFileHandles;
- (char)unitTesting_stageFileWithLocalURL:(id)a0 error:(id *)a1;
- (id)unitTesting_stagedShardFileFullPathForEntry:(id)a0;
- (id)unitTesting_stagedShardFileNamesWithError:(id *)a0;
- (char)unzipStagedShardFileForEntry:(id)a0 toURL:(id)a1 error:(id *)a2;

@end
