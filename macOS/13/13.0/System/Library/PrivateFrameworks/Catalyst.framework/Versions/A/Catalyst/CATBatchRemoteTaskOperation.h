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
- (void)cancelSubOperations;
- (void)remoteTaskDidFinish:(id)a0;
- (id)initWithTaskClient:(id)a0 requests:(id)a1;
- (id)initWithRemoteTaskOperations:(id)a0;

@end
