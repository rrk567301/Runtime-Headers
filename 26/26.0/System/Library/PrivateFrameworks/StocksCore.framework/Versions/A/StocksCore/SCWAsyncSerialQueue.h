@class NSOperationQueue;

@interface SCWAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (getter=isSuspended) BOOL suspended;

- (void)waitUntilEmpty;
- (void)enqueueBlock:(id /* block */)a0;
- (id)initWithQualityOfService:(long long)a0;
- (void).cxx_destruct;

@end
