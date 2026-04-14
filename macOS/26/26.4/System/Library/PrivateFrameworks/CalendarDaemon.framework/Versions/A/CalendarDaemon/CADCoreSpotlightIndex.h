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
- (void)beginIndexBatch;
- (void)fetchLastClientStateWithCompletionHandler:(id /* block */)a0;
- (void)deleteAllSearchableItemsForBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (void)endIndexBatchWithExpectedClientState:(id)a0 newClientState:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithBundleID:(id)a0;
- (void).cxx_destruct;
- (void)reportDonationProgressWithAllKnownItems:(unsigned long long)a0 itemsNeedingDonation:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
