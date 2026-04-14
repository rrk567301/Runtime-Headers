@class NSDictionary;

@interface NSXMLObjectStore2 : NSAtomicStore {
    unsigned long long _nextPK64;
    void *_reserved;
    NSDictionary *_entitiesForConfiguration;
}

+ (id)metadataForPersistentStoreWithURL:(id)a0 error:(id *)a1;
+ (BOOL)setMetadata:(id)a0 forPersistentStoreWithURL:(id)a1 error:(id *)a2;

- (id)_entitiesForConfiguration;
- (void)willRemoveFromPersistentStoreCoordinator:(id)a0;
- (BOOL)load:(id *)a0;
- (BOOL)save:(id *)a0;
- (id)initWithPersistentStoreCoordinator:(id)a0 configurationName:(id)a1 URL:(id)a2 options:(id)a3;
- (id)type;
- (id)newCacheNodeForManagedObject:(id)a0;
- (void)willRemoveCacheNodes:(id)a0;
- (void)dealloc;
- (id)newReferenceObjectForManagedObject:(id)a0;
- (void)updateCacheNode:(id)a0 fromManagedObject:(id)a1;
- (id)_createDocument;
- (BOOL)_isDocumentXMLStore:(id)a0;
- (id)_metadataXML;
- (void)_processDBInfoNode:(id)a0;
- (id)_processMetadataNode:(id)a0;
- (unsigned long long)nextPK64;

@end
