@class FCFetchOperationResult, NSObject;
@protocol OS_dispatch_queue;

@interface FCFetchOperation : FCOperation

@property unsigned long long cachePolicy;
@property double maximumCachedAge;
@property BOOL shouldFailOnMissingObjects;
@property (copy) id /* block */ fetchCompletionBlock;
@property (retain) NSObject<OS_dispatch_queue> *fetchCompletionQueue;
@property BOOL canSendFetchCompletionSynchronously;
@property (readonly) FCFetchOperationResult *result;

- (void)operationDidFinishWithError:(id)a0;
- (void)finishExecutingWithFetchedObject:(id)a0;
- (void)takeInputsFromFetchOperation:(id)a0;
- (void)cancel;
- (void)finishExecutingWithError:(id)a0;
- (void)finishFromEarlyCancellation;
- (void)finishExecutingWithResult:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)finishExecutingWithStatus:(unsigned long long)a0;

@end
