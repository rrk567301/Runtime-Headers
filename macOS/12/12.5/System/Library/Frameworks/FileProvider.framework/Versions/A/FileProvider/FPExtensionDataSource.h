@class NSString, NSMutableDictionary, NSData, FPExtensionEnumerationSettings, NSObject;
@protocol FPCollectionDataSourceDelegate, FPXEnumerator, OS_dispatch_queue, FPDLifetimeServicing;

@interface FPExtensionDataSource : NSObject <FPXEnumeratorObserver, FPCollectionDataSource> {
    FPExtensionEnumerationSettings *_enumerationSettings;
    id<FPXEnumerator> _enumerator;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _started;
    BOOL _invalidated;
    BOOL _shouldUpdate;
    BOOL _enumeratingExtensionResults;
    NSData *_nextPageToken;
    NSData *_changeToken;
    unsigned long long _numGatheredItems;
    id<FPDLifetimeServicing> _lifetimeExtender;
    NSMutableDictionary *_oobBuffer;
}

@property (class) long long suggestedPageSize;
@property (class) long long suggestedBatchSize;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasMoreIncoming;
@property (weak, nonatomic) id<FPCollectionDataSourceDelegate> delegate;

- (void)invalidate;
- (void).cxx_destruct;
- (void)start;
- (void)_invalidate;
- (void)invalidateWithError:(id)a0;
- (void)_updateItems;
- (void)_invalidateWithError:(id)a0;
- (void)enumerationResultsDidChange;
- (id)initWithEnumerationSettings:(id)a0;
- (void)enumerationMightHaveResumed;
- (void)didUpdateItem:(id)a0;
- (void)_gatherInitialItems;
- (void)_updateItemsWithUpdatesCount:(unsigned long long)a0 section:(unsigned long long)a1;
- (id)_initialPageFromSortDescriptors:(id)a0;
- (void)_gatherMoreItemsAfterPage:(id)a0 section:(unsigned long long)a1;

@end
