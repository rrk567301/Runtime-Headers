@class NSOperationQueue;

@interface FCAsyncSerialQueue : NSObject

@property (retain, nonatomic) NSOperationQueue *serialOperationQueue;
@property (nonatomic) BOOL suspended;
@property (readonly, nonatomic) NSOperationQueue *underlyingOperationQueue;

- (id)initWithQualityOfService:(long long)a0;
- (id)initWithUnderlyingQueue:(id)a0 qualityOfService:(long long)a1;
- (void)enqueueBlockForMainThread:(id /* block */)a0;
- (void)enqueueBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)cancelAllBlocks;
- (id)init;
- (void)withQualityOfService:(long long)a0 enqueueBlock:(id /* block */)a1;
- (void)withQualityOfService:(long long)a0 enqueueBlockForMainThread:(id /* block */)a1;
- (void)enqueueOperation:(id)a0;

@end
