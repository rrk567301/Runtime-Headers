@class NSArray, NSOperationQueue;

@interface CATBatchRemoteTaskOperation : CATOperation {
    NSArray *mRemoteTasks;
    NSOperationQueue *mQueue;
}

@property (readonly, copy, nonatomic) NSArray *remoteTaskOperations;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (BOOL)isAsynchronous;
- (id)initWithRemoteTaskOperations:(id)a0;
- (void)cancelSubOperations;
- (void)remoteTaskDidFinish:(id)a0;
- (id)initWithTaskClient:(id)a0 requests:(id)a1;

@end
