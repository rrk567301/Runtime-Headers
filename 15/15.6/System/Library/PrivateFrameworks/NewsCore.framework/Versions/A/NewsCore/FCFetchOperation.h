@class FCFetchOperationResult, NSObject;
@protocol OS_dispatch_queue;

@interface FCFetchOperation : FCOperation

@property unsigned long long cachePolicy;
@property double maximumCachedAge;
@property char shouldFailOnMissingObjects;
@property (copy) id /* block */ fetchCompletionBlock;
@property (retain) NSObject<OS_dispatch_queue> *fetchCompletionQueue;
@property char canSendFetchCompletionSynchronously;
@property (readonly) FCFetchOperationResult *result;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)finishFromEarlyCancellation;
- (void)operationDidFinishWithError:(id)a0;
- (void)finishExecutingWithError:(id)a0;
- (void)finishExecutingWithFetchedObject:(id)a0;
- (void)finishExecutingWithResult:(id)a0;
- (void)finishExecutingWithStatus:(unsigned long long)a0;
- (void)takeInputsFromFetchOperation:(id)a0;

@end
