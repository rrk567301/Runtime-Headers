@class NSMutableDictionary;

@interface NSAtomicStore : NSPersistentStore {
    NSMutableDictionary *_nodeCache;
    NSMutableDictionary *_entityCache;
    NSMutableDictionary *_storeMetadata;
    long long _nextReference;
    void *_reserved4;
    void *_reserved5;
}

+ (void)initialize;
+ (id)metadataForPersistentStoreWithURL:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (BOOL)save:(id *)a0;
- (id)metadata;
- (void)setMetadata:(id)a0;
- (id)initWithPersistentStoreCoordinator:(id)a0 configurationName:(id)a1 URL:(id)a2 options:(id)a3;
- (id)_rawMetadata__;
- (BOOL)load:(id *)a0;
- (void)_preflightCrossCheck;
- (id)executeRequest:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)newValuesForObjectWithID:(id)a0 withContext:(id)a1 error:(id *)a2;
- (id)newValueForRelationship:(id)a0 forObjectWithID:(id)a1 withContext:(id)a2 error:(id *)a3;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)a0;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)a0;
- (id)obtainPermanentIDsForObjects:(id)a0 error:(id *)a1;
- (void)_didLoadMetadata;
- (void)addCacheNodes:(id)a0;
- (id)cacheNodes;
- (void)willRemoveCacheNodes:(id)a0;
- (id)cacheNodeForObjectID:(id)a0;
- (id)newCacheNodeForManagedObject:(id)a0;
- (void)updateCacheNode:(id)a0 fromManagedObject:(id)a1;
- (id)newReferenceObjectForManagedObject:(id)a0;
- (id)objectIDForEntity:(id)a0 referenceObject:(id)a1;
- (id)referenceObjectForObjectID:(id)a0;

@end
