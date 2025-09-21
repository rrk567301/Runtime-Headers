@class MPCPlaybackAccount, MPCModelStorePlaybackItemsRequest;
@protocol MPCModelStorePlaybackItemsRequestAccumulator;

@interface MPCModelStorePlaybackItemsRequestPaginatedOperation : MPAsyncOperation {
    MPCPlaybackAccount *_account;
    id<MPCModelStorePlaybackItemsRequestAccumulator> _accumulator;
}

@property (readonly, copy, nonatomic) MPCModelStorePlaybackItemsRequest *request;
@property (readonly, copy, nonatomic) id /* block */ responseHandler;

- (void)execute;
- (void)finish;
- (void)finishWithError:(id)a0;
- (void)_finishWithResponse:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 responseHandler:(id /* block */)a1 accumulator:(id)a2;
- (void)loadNextPageForAccumulator:(id)a0;
- (void)refreshEligibilityForResponse:(id)a0;
- (void)repersonalizeContentDescriptors:(id)a0 accumulator:(id)a1 isFinalResponse:(BOOL)a2;

@end
