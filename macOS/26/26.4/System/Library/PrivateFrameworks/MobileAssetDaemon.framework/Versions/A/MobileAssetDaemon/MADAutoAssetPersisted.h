@class SUCorePersistedState, NSString, NSCache, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface MADAutoAssetPersisted : NSObject

@property (readonly, retain, nonatomic) NSString *logLeader;
@property (readonly, retain, nonatomic) NSString *moduleName;
@property (readonly, retain, nonatomic) NSString *moduleCurrentVersion;
@property (retain, nonatomic) NSString *latestSafeSummary;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *persistedQueue;
@property (readonly, retain, nonatomic) SUCorePersistedState *entryTableOfContents;
@property (retain, nonatomic) NSMutableArray *currentEntryIDs;
@property (readonly, copy, nonatomic) id /* block */ moduleVersionMigrator;
@property (retain, nonatomic) NSCache *knownPersistedFiles;
@property (retain, nonatomic) NSCache *knownPersistedStates;
@property (nonatomic) BOOL cachingEnabled;
@property (readonly, retain, nonatomic) SUCorePersistedState *persistedConfig;

+ (id)persistedComponentSymbol:(id)a0;
+ (long long)persistedEntryStatusValue:(id)a0;
+ (id)entryFileIDForModule:(id)a0 fromFilename:(id)a1;
+ (id)persistedStateFilename:(id)a0 forFileID:(id)a1 ofEntryName:(id)a2;
+ (BOOL)isConsideredMatchWithoutVersion:(id)a0 ofEntryFullEntryIDName:(id)a1 toSelectorPersistedEntryID:(id)a2;
+ (id)persistedEntryStatusName:(long long)a0;
+ (id)persistedOperationSymbol:(id)a0;
+ (void)removeStateDirectoryForModule:(id)a0;

- (id)_summary;
- (void)flushPersistedStateCacheAndSetCachingBehaviour:(BOOL)a0;
- (id)_summaryLeader:(id)a0 fromLocation:(id)a1;
- (BOOL)_verifyPersistedDirectoryExistsOrCreate:(id)a0;
- (id)persistedEntryIDs:(id)a0;
- (void)_removeEntryFile:(id)a0 reason:(id)a1 fromLocation:(id)a2;
- (void)loadPersistedState:(id)a0;
- (id)persistedEntryIDs:(id)a0 assetSelector:(id)a1;
- (void)removeAllPersistedEntries:(id)a0;
- (id)decodeFromLocation:(id)a0 ofEntryName:(id)a1 fromPersistedEntry:(id)a2 decodingObjectForKey:(id)a3 ofClass:(Class)a4 allowingNilObject:(BOOL)a5;
- (id)decodeFromLocation:(id)a0 ofEntryName:(id)a1 fromPersistedEntry:(id)a2 decodingObjectForKey:(id)a3 ofClass:(Class)a4 withEncodeClasses:(id)a5 allowingNilObject:(BOOL)a6;
- (BOOL)_verifyEntryFileExists:(id)a0 fromLocation:(id)a1 expectingExists:(BOOL)a2;
- (void).cxx_destruct;
- (long long)_validateLoadedEntry:(id)a0 fromLocation:(id)a1 forEntryName:(id)a2 loadedWithEntryStatus:(long long)a3;
- (BOOL)_preExistingPersistedStateValid:(id)a0 fromLocation:(id)a1;
- (BOOL)persistedEntryAlreadyExists:(id)a0 fromLocation:(id)a1;
- (id)persistedEntry:(id)a0 fromLocation:(id)a1;
- (long long)persistedEntryCount:(id)a0;
- (id)summary;
- (void)_removeEntriesMissingFromTableOfContents:(id)a0;
- (void)storePersistedEntry:(id)a0 withEntrySummary:(id)a1 fromLocation:(id)a2;
- (id)description;
- (id)persistedEntryIDs:(id)a0 assetType:(id)a1;
- (void)removePersistedEntry:(id)a0 fromLocation:(id)a1;
- (id)_contentsOfModulePersistedPath:(id)a0 fromLocation:(id)a1;
- (void)_persistStatusChange:(id)a0 ofEntryName:(id)a1 withEntrySummary:(id)a2 currentStatus:(long long)a3 fromLocation:(id)a4;
- (void)_persistTableOfContents:(id)a0 forEntryName:(id)a1 withEntryStatus:(long long)a2;
- (id)_loadPersistedEntry:(id)a0 forEntryName:(id)a1 withEntryStatus:(long long)a2;
- (id)initForModule:(id)a0 ofModuleVersion:(id)a1 usingDispatchQueue:(id)a2 loggingByName:(id)a3 withVersionMigrator:(id /* block */)a4;

@end
