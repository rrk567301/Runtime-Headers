@class FPExtensionDataSource, FPSpotlightDataSource, NSObject, FPSearchQueryDescriptor;
@protocol OS_dispatch_queue, FPSpotlightDataSourceDelegate;

@interface FPSearchQueryDataSource : NSObject <FPCollectionDataSource, FPSpotlightDataSourceDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    char _started;
    char _invalidated;
    FPSpotlightDataSource *_spotlightDataSource;
    FPExtensionDataSource *_serverSearchDataSource;
}

@property (readonly, nonatomic) FPSearchQueryDescriptor *queryDescriptor;
@property (weak, nonatomic) id<FPSpotlightDataSourceDelegate> delegate;
@property (readonly, nonatomic) char hasMoreIncoming;
@property (readonly) unsigned long long lastForcedUpdate;

- (void).cxx_destruct;
- (void)invalidate;
- (void)start;
- (void)dataSource:(id)a0 didChangeItemsOrigin:(unsigned long long)a1;
- (void)dataSource:(id)a0 receivedUpdatedItems:(id)a1 deletedItems:(id)a2 hasMoreChanges:(char)a3;
- (void)dataSource:(id)a0 replaceContentsWithItems:(id)a1 hasMoreChanges:(char)a2;
- (void)dataSource:(id)a0 wasInvalidatedWithError:(id)a1;
- (char)dataSourceShouldAlwaysReplaceContents:(id)a0;
- (void)enumerationMightHaveResumed;
- (id)initWithQueryDescriptor:(id)a0 predicate:(id)a1;

@end
