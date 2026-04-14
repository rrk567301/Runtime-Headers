@class NSMutableArray, NSString, NSMutableDictionary, NSPredicate, NSMutableSet, NSObject, NSMetadataQuery;
@protocol OS_dispatch_queue, BRItemCollectionGathererDelegate;

@interface BRItemCollectionGatherer : NSObject <FPItemCollectionItemIDBasedDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_itemIDToItemCollectionMap;
    id<BRItemCollectionGathererDelegate> _delegate;
    NSMetadataQuery *_query;
    NSPredicate *_predicate;
    unsigned long long _watchTypes;
    NSString *_gatherPrefix;
    NSMutableArray *_watchedAppLibraryFPItemIDs;
    NSMutableSet *_waitingToBeGatheredCollections;
    BOOL _finishedInitialGathering;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)disableUpdates;
- (void)enableUpdates;
- (void)stop;
- (void)dataForCollectionShouldBeReloaded:(id)a0;
- (void)collectionDidFinishGathering:(id)a0;
- (void)collection:(id)a0 didUpdateItems:(id)a1 replaceItemsByFormerID:(id)a2 deleteItemsWithIDs:(id)a3;
- (void)_addItemCollectionOnObject:(id)a0;
- (BOOL)_canWatchItem:(id)a0;
- (BOOL)_buildCollectionsOnItem:(id)a0;
- (id)initWithDelegate:(id)a0 query:(id)a1;
- (void)_startWatchingURLsIfNeeded:(id)a0;
- (void)_startWatchingAppLibrariesIfNeeded:(id)a0;
- (void)startWatchingRootItemWithScopes:(id)a0;
- (void)_startWatchingNewSubItem:(id)a0;
- (void)_stopWatchingItemIDRecusively:(id)a0;

@end
