@class NSOperationQueue, NSOperation;

@interface VSTimeoutOperation : VSAsyncOperation

@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (readonly, nonatomic) NSOperation *operation;
@property (readonly, nonatomic) double timeout;

- (void)cancel;
- (void)executionDidBegin;
- (void).cxx_destruct;
- (id)init;
- (id)initWithOperation:(id)a0 timeout:(double)a1;

@end
