@class NSObject, NSString, NSMutableArray, CADMockSpotlightIndexProvider;
@protocol OS_dispatch_queue;

@interface CADMockSpotlightIndex : NSObject <CADSpotlightIndex> {
    CADMockSpotlightIndexProvider *_provider;
    BOOL _batchOpen;
    NSMutableArray *_batchJobs;
    NSObject<OS_dispatch_queue> *_queue;
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
- (id)initWithProvider:(id)a0;
- (void).cxx_destruct;
- (double)_artificialDelay;
- (id)_batchFailureError;
- (BOOL)_incrementAndCheckIfShouldFailCall;
- (id)_mockFailureError;
- (void)reportDonationProgressWithAllKnownItems:(unsigned long long)a0 itemsNeedingDonation:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
