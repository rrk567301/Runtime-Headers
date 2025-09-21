@class RCMutexLock, NSString, NSMutableDictionary, NSDictionary;
@protocol RCOperationThrottler, RCKeyValueStoreMigrating;

@interface RCKeyValueStore : NSObject <RCOperationThrottlerDelegate>

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long storeSize;
@property (retain, nonatomic) NSMutableDictionary *objectsByKey;
@property (nonatomic) char needSave;
@property (retain, nonatomic) NSString *storeDirectory;
@property (nonatomic) unsigned long long clientVersion;
@property (nonatomic) unsigned long long optionsMask;
@property (retain, nonatomic) id<RCKeyValueStoreMigrating> migrator;
@property (retain, nonatomic) RCMutexLock *writeLock;
@property (retain, nonatomic) id<RCOperationThrottler> saveThrottler;
@property (nonatomic) char shouldExportJSONSidecar;
@property (readonly, nonatomic) NSDictionary *asDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistenceQueue;
+ (char)shouldDumpToJSON;

- (id)init;
- (id)allKeys;
- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)a0;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)setObjects:(id)a0 forKeys:(id)a1;
- (id)objectsForKeys:(id)a0;
- (char)boolValueForKey:(id)a0;
- (void)setBoolValue:(char)a0 forKey:(id)a1;
- (char)containsObjectForKey:(id)a0;
- (void)saveWithCompletionHandler:(id /* block */)a0;
- (id)_dictionary;
- (id)_loadFromDisk;
- (char)_isBackupEnabled;
- (void)_logCacheStatus;
- (void)updateObjectsForKeys:(id)a0 withBlock:(id /* block */)a1;
- (void)_clearStore;
- (id)_initializeStoreDirectoryWithName:(id)a0;
- (char)_persistOnlyInMemoryEnabled;
- (void)_queueSave;
- (void)_saveAsyncWithCompletionHandler:(id /* block */)a0;
- (char)_shouldMigrateOnUpgrade;
- (void)addAllEntriesToDictionary:(id)a0;
- (id)initWithName:(id)a0 directory:(id)a1 version:(unsigned long long)a2 options:(unsigned long long)a3;
- (id)initWithName:(id)a0 directory:(id)a1 version:(unsigned long long)a2 options:(unsigned long long)a3 migrator:(id)a4;
- (void)operationThrottler:(id)a0 performAsyncOperationWithCompletion:(id /* block */)a1;
- (void)setOptionBackupEnabled:(char)a0;

@end
