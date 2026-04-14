@class NSMutableDictionary, NSSet, NSOperationQueue, NSString, NSObject, NSNumber;
@protocol CHIPPluginStorageDelegate, CHIPPluginFabricStorageDataSource, OS_dispatch_queue, CHIPPluginStorageDataSource;

@interface CHIPPluginStorage : HMFObject <HMFLogging, CHIPPersistentStorageDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSOperationQueue *keyValueStoreUpdateQueue;
@property (readonly) NSMutableDictionary *temporaryStorage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) id<CHIPPluginStorageDelegate> delegate;
@property (readonly, copy) NSSet *pairedNodeIDs;
@property (retain) NSNumber *fabricMappingIndex;
@property (retain) id<CHIPPluginFabricStorageDataSource> fabricDataSource;
@property (weak) id<CHIPPluginStorageDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortDescription;
+ (id)logCategory;
+ (id)formatKeyForNodeId:(id)a0 key:(id)a1;
+ (id)MATTER_STORAGE_KEYS;
+ (id)CHIPPLUGIN_STORAGE_KEYS;
+ (id)stripNodeIdFromKey:(id)a0;
+ (BOOL)keyMatchesMatterKey:(id)a0;
+ (void)deleteCHIPPluginDataForNodeID:(id)a0 withStorage:(id)a1;
+ (id)matterItemsFromDictionary:(id)a0;
+ (BOOL)didUpdateMatterItems:(id)a0 oldStorage:(id)a1;

- (void).cxx_destruct;
- (id)valueForKey:(id)a0;
- (id)initWithQueue:(id)a0;
- (id)logIdentifier;
- (void)handleUpdatedCurrentFabricIndex;
- (void)handleUpdatedDataWithIsLocalChange:(BOOL)a0;
- (id)CHIPGetKeyValue:(id)a0;
- (void)CHIPSetKeyValue:(id)a0 value:(id)a1;
- (void)CHIPDeleteKeyValue:(id)a0;
- (id)_preferencesValueForKey:(id)a0;
- (id)_getCHIPFrameworkVersion;
- (void)resetStorage;
- (void)_moveTempStorageIntoDataSource;
- (BOOL)_syncSetDataSourceValue:(id)a0 forKey:(id)a1;
- (void)_removeAllDataSourceDataWithCompletion:(id /* block */)a0;
- (void)_setPreferencesValueForKey:(id)a0 value:(id)a1;
- (BOOL)_handlePerFabricStorageMaybeAvailable:(id)a0;
- (void)handleUpdatedDataForFabricIndex:(id)a0 isLocalChange:(BOOL)a1;
- (void)_handleUpdatedDataWithIsLocalChange:(BOOL)a0;
- (void)removePairedNodeID:(id)a0;
- (void)_setTempValueForKey:(id)a0 value:(id)a1;
- (void)setValueForKey:(id)a0 value:(id)a1;
- (void)_removeTempValueForKey:(id)a0;
- (id)_tempValueForKey:(id)a0;
- (void)setPairedNodeIDs:(id)a0;
- (BOOL)_checkVersion:(id)a0;
- (void)handleUpdatedDataForFabricIndex:(id)a0 nodeID:(id)a1 isLocalChange:(BOOL)a2;
- (void)prepareStorageForFabricMappingIndex:(id)a0;
- (void)setFabricMappingIndexSync:(unsigned char)a0;
- (id)ipkForCurrentFabricMappingIndex;
- (void)addPairedNodeID:(id)a0;

@end
