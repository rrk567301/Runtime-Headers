@class MPCModelStorePlaybackItemsRequest;

@interface _MPCSonicSPIROp : MPAsyncOperation

@property (readonly, copy, nonatomic) MPCModelStorePlaybackItemsRequest *request;
@property (readonly, copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequest:(id)a0 responseHandler:(id /* block */)a1;

@end
