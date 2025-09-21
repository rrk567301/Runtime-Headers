@class NSOperationQueue;

@interface RCAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (nonatomic) BOOL suspended;

- (void)cancelAllBlocks;
- (void)enqueueBlock:(id /* block */)a0;
- (void)enqueueOperation:(id)a0;
- (id)init;
- (void)enqueueBlockForMainThread:(id /* block */)a0;
- (void)withQualityOfService:(long long)a0 enqueueBlockForMainThread:(id /* block */)a1;
- (id)initWithQualityOfService:(long long)a0;
- (void).cxx_destruct;

@end
