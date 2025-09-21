@class NSURL, TMMessageSerializer;

@interface TMNodeCache : TMMonoStructure {
    struct vector<NodeCacheEntry, std::allocator<NodeCacheEntry>> { struct NodeCacheEntry *__begin_; struct NodeCacheEntry *__end_; struct __compressed_pair<NodeCacheEntry *, std::allocator<NodeCacheEntry>> { struct NodeCacheEntry *__value_; } __end_cap_; } _uncommittedEntries;
}

@property (retain) NSURL *updatingStableCacheURL;
@property (retain) NSURL *updatingCloneCacheURL;
@property (readonly) TMMessageSerializer *serializer;

+ (id)structureType;
+ (id)URLForBuildUnderURL:(id)a0 error:(id *)a1;
+ (char)_appendEntries:(struct vector<NodeCacheEntry, std::allocator<NodeCacheEntry>> { struct NodeCacheEntry *x0; struct NodeCacheEntry *x1; struct __compressed_pair<NodeCacheEntry *, std::allocator<NodeCacheEntry>> { struct NodeCacheEntry *x0; } x2; })a0 toURL:(id)a1 error:(id *)a2;
+ (id)annotatedStateAtURL:(id)a0;
+ (id)cacheFileURLForSourceUUID:(id)a0 backupStartDate:(id)a1 underURL:(id)a2;
+ (id)immemorialFileURLUnderURL:(id)a0;
+ (char)isTemporaryCacheFileAtURL:(id)a0;
+ (id)nearestFutureDateForDate:(id)a0 inDates:(id)a1;
+ (id)tempCacheFileURLForSourceUUID:(id)a0 backupStartDate:(id)a1 underURL:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_allSourceUUIDs;
- (char)WIP_storeBackupCompletionDate:(id)a0 forBackupStartDate:(id)a1 error:(id *)a2;
- (void)_addEntry:(struct NodeCacheEntry { unsigned long x0 : 60; unsigned long x1 : 60; unsigned short x2 : 16; })a0;
- (char)_enumerateAllFilesStartedBetweenDate:(id)a0 endDate:(id)a1 sourceUUID:(id)a2 error:(id *)a3 enumerator:(id /* block */)a4;
- (char)_enumerateEntriesForBackupStartDate:(id)a0 sourceUUID:(id)a1 error:(id *)a2 enumerator:(id /* block */)a3;
- (char)_enumerateEntriesInFile:(id)a0 error:(id *)a1 enumerator:(id /* block */)a2;
- (char)_enumerateEntriesStartedBetweenDate:(id)a0 endDate:(id)a1 sourceUUID:(id)a2 error:(id *)a3 enumerator:(id /* block */)a4;
- (char)_enumerateFilesForBackupStartDate:(id)a0 sourceUUID:(id)a1 backupCompletionDate:(id)a2 error:(id *)a3 enumerator:(id /* block */)a4;
- (id)_mergeCacheFilesBetweenStartDate:(id)a0 endDate:(id)a1 sourceUUID:(id)a2 intoDate:(id)a3 error:(id *)a4;
- (id)_mostRecentCompletionDate;
- (char)buildAtURL:(id)a0 parentURL:(id)a1 error:(id *)a2;
- (char)cleanCache:(id *)a0;
- (char)collectFileIDsToBeDeletedUnderURL:(id)a0 sourceUUID:(id)a1 backupStartDate:(id)a2 error:(id *)a3;
- (id)destinationDeletedFileIDsSetForBackupStartDate:(id)a0 error:(id *)a1;
- (id)destinationFileIDsDeletedForBackupStartDate:(id)a0 error:(id *)a1;
- (char)finishUpdatingCurrentCache:(id *)a0;
- (char)flushCache:(id *)a0;
- (id)immemorialCacheURL;
- (id)initWithUUID:(id)a0 url:(id)a1;
- (char)purgeEntriesForAllBackupCompletionDatesExcept:(id)a0 error:(id *)a1;
- (void)recordBackupAction:(unsigned long long)a0 sourceFileID:(unsigned long long)a1 destinationFileID:(unsigned long long)a2;
- (void)recordUnlinkOfFile:(unsigned long long)a0 wasLastUnlink:(char)a1;
- (char)startUpdatingCacheForSourceUUID:(id)a0 backupStartDate:(id)a1 error:(id *)a2;
- (char)storeBackupCompletionDate:(id)a0 forBackupStartDate:(id)a1 error:(id *)a2;

@end
