@class NSArray, NSOperationQueue;

@interface CATBatchRemoteTaskOperation : CATOperation {
    NSArray *mRemoteTasks;
    NSOperationQueue *mQueue;
}

@property (readonly, copy, nonatomic) NSArray *remoteTaskOperations;

- (void)cancel;
- (BOOL)isAsynchronous;
- (id)init;
- (void)main;
- (void).cxx_destruct;
- (void)cancelSubOperations;
- (id)initWithRemoteTaskOperations:(id)a0;
- (id)initWithTaskClient:(id)a0 requests:(id)a1;
- (void)remoteTaskDidFinish:(id)a0;

@end
