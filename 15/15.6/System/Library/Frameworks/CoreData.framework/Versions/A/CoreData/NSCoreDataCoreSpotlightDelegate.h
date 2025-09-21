@class NSDictionary, PFCSSearchableIndexProvider, NSString, NSURL, NSPersistentStoreCoordinator, NSPersistentStoreDescription, NSManagedObjectContext;

@interface NSCoreDataCoreSpotlightDelegate : NSObject <CSSearchableIndexDelegate> {
    NSPersistentStoreCoordinator *_coordinator;
    NSPersistentStoreDescription *_description;
    NSString *_storeIdentifier;
    NSManagedObjectContext *_context__;
    NSString *_domainIdentifier;
    NSString *_indexName;
    NSString *_bundleIdentifier;
    NSString *_protectionClass;
    _Atomic BOOL _enabled;
    char _usesPrivateIndex;
    NSURL *_indexURL;
    int __indexerThrottle;
    NSDictionary *_indexedPropertyNamesByEntity;
    int __enqueuedOperationCount;
}

@property (copy) NSURL *indexURL;
@property (retain, nonatomic) PFCSSearchableIndexProvider *indexProvider;
@property (readonly, getter=isIndexingEnabled) char indexingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)domainIdentifier;
- (id)bundleIdentifier;
- (id)protectionClass;
- (char)usePrivateIndex;
- (int)_indexerThrottle;
- (id)attributeSetForObject:(id)a0;
- (void)deleteSpotlightIndexWithCompletionHandler:(id /* block */)a0;
- (id)indexName;
- (void)indexSearchableItemsToCurrentHistoryToken;
- (id)indexedPropertyNamesByEntityNameUsingModel:(id)a0;
- (id)initForStoreWithDescription:(id)a0 coordinator:(id)a1;
- (id)initForStoreWithDescription:(id)a0 model:(id)a1;
- (void)searchableIndex:(id)a0 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)a1;
- (void)searchableIndex:(id)a0 reindexSearchableItemsWithIdentifiers:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)startSpotlightIndexing;
- (void)stopSpotlightIndexing;

@end
