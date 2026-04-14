@class NSOperationQueue;

@interface RCAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (nonatomic) BOOL suspended;

- (void)enqueueBlock:(id /* block */)a0;
- (void)withQualityOfService:(long long)a0 enqueueBlockForMainThread:(id /* block */)a1;
- (id)init;
- (id)initWithQualityOfService:(long long)a0;
- (void)cancelAllBlocks;
- (void).cxx_destruct;
- (void)enqueueBlockForMainThread:(id /* block */)a0;
- (void)enqueueOperation:(id)a0;

@end
