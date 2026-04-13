@class NSDictionary, PFCSSearchableIndexProvider, NSPersistentStoreCoordinator, NSURL, NSString, NSPersistentStoreDescription, NSManagedObjectContext;

@interface NSCoreDataCoreSpotlightDelegate : NSObject {
    NSPersistentStoreCoordinator *_coordinator;
    NSPersistentStoreDescription *_description;
    NSString *_storeIdentifier;
    NSManagedObjectContext *_context__;
    NSString *_domainIdentifier;
    NSString *_indexName;
    NSString *_bundleIdentifier;
    NSString *_protectionClass;
    BOOL _supportsPersistentHistory;
    BOOL _usesSharedCoordinatorStack;
    BOOL _usesPrivateIndex;
    NSURL *_indexURL;
    int __indexerThrottle;
    NSDictionary *_indexedPropertyNamesByEntity;
}

@property (copy) NSURL *indexURL;
@property (retain, nonatomic) PFCSSearchableIndexProvider *indexProvider;
@property (readonly, getter=isIndexingEnabled) BOOL indexingEnabled;

- (void)dealloc;
- (id)init;
- (id)domainIdentifier;
- (id)bundleIdentifier;
- (id)indexName;
- (id)protectionClass;
- (BOOL)usePrivateIndex;
- (id)indexedPropertyNamesByEntityNameUsingModel:(id)a0;
- (id)initForStoreWithDescription:(id)a0 coordinator:(id)a1;
- (id)initForStoreWithDescription:(id)a0 model:(id)a1;
- (id)attributeSetForObject:(id)a0;
- (int)_indexerThrottle;
- (void)searchableIndex:(id)a0 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)a1;
- (void)searchableIndex:(id)a0 reindexSearchableItemsWithIdentifiers:(id)a1 acknowledgementHandler:(id /* block */)a2;
- (void)startSpotlightIndexing;
- (void)stopSpotlightIndexing;
- (void)deleteSpotlightIndexWithCompletionHandler:(id /* block */)a0;
- (void)indexSearchableItemsToCurrentHistoryToken;

@end
