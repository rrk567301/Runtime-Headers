@class NSString, CSSearchableIndex;

@interface CADCoreSpotlightIndex : NSObject <CADSpotlightIndex> {
    CSSearchableIndex *_index;
}

@property (readonly, nonatomic) BOOL needsReindex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)indexSearchableItems:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithBundleID:(id)a0;
- (void)beginIndexBatch;
- (void)endIndexBatchWithExpectedClientState:(id)a0 newClientState:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteAllSearchableItemsForBundleID:(id)a0 completionHandler:(id /* block */)a1;

@end
