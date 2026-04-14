@class NSOperationQueue;

@interface RCAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (nonatomic) BOOL suspended;

- (id)initWithQualityOfService:(long long)a0;
- (void)enqueueBlockForMainThread:(id /* block */)a0;
- (void)cancelAllBlocks;
- (void).cxx_destruct;
- (void)enqueueOperation:(id)a0;
- (void)withQualityOfService:(long long)a0 enqueueBlockForMainThread:(id /* block */)a1;
- (id)init;
- (void)enqueueBlock:(id /* block */)a0;

@end
