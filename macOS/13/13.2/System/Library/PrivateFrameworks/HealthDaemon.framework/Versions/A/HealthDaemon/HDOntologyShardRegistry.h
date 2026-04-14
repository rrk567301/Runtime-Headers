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

+ (BOOL)insertEntry:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)nextAvailableMercuryZipTSVSlotWithTransaction:(id)a0 error:(id *)a1;
+ (id)importedMercuryZipTSVEntriesWithTransaction:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (BOOL)insertEntry:(id)a0 error:(id *)a1;
- (BOOL)insertEntries:(id)a0 error:(id *)a1;
- (BOOL)entryWithIdentifier:(id)a0 schemaType:(id)a1 schemaVersion:(long long)a2 entryOut:(id *)a3 transaction:(id)a4 error:(id *)a5;
- (id)entriesWithPredicate:(id)a0 orderingTerms:(id)a1 error:(id *)a2;
- (BOOL)enumerateEntriesWithPredicate:(id)a0 orderingTerms:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
- (id)takeFileHandleAssertionForOwnerIdentifier:(id)a0 error:(id *)a1;
- (id)stagedShardFileEntriesWithError:(id *)a0;
- (BOOL)stagedShardFileEntryForEntry:(id)a0 entryOut:(id *)a1 error:(id *)a2;
- (BOOL)stageShardFileWithLocalURL:(id)a0 entry:(id)a1 error:(id *)a2;
- (BOOL)copyToStagingDirectoryFileWithLocalURL:(id)a0 entry:(id)a1 error:(id *)a2;
- (BOOL)deleteStagedShardFileForEntry:(id)a0 error:(id *)a1;
- (BOOL)deleteStagedFilesNotMatchingEntries:(id)a0 error:(id *)a1;
- (long long)purgeableSpaceForStagedShards;
- (long long)purgeSpaceForStagedShards;
- (id)openShardFileForEntry:(id)a0 error:(id *)a1;
- (BOOL)moveStagedShardFileForEntry:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)unzipStagedShardFileForEntry:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)unitTesting_stagedShardFileFullPathForEntry:(id)a0;
- (id)unitTesting_stagedShardFileNamesWithError:(id *)a0;
- (BOOL)unitTesting_stageFileWithLocalURL:(id)a0 error:(id *)a1;
- (id)unitTesting_cachedFileHandles;

@end
