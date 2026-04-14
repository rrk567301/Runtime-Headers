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
- (id)initWithProvider:(id)a0;
- (void)beginIndexBatch;
- (void)endIndexBatchWithExpectedClientState:(id)a0 newClientState:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteAllSearchableItemsForBundleID:(id)a0 completionHandler:(id /* block */)a1;
- (double)_artificialDelay;
- (id)_batchFailureError;
- (BOOL)_incrementAndCheckIfShouldFailCall;
- (id)_mockFailureError;

@end
