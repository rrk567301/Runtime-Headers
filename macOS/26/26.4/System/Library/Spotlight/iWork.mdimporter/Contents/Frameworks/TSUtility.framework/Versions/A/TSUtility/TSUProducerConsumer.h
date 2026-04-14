@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore;

@interface TSUProducerConsumer : NSObject

@property (retain, nonatomic) NSMutableArray *producedObjectQueue;
@property (retain, nonatomic) NSMutableArray *gatheredRocks;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } unfairLock;

- (void).cxx_destruct;
- (id)init;
- (void)enqueueProducedObject:(id)a0;
- (void)launchNumberOfConsumers:(unsigned long long)a0 usingConsumeBlock:(id /* block */)a1;
- (void)launchNumberOfConsumers:(unsigned long long)a0 usingRockReturningConsumeBlock:(id /* block */)a1;
- (void)p_launchNumberOfConsumers:(unsigned long long)a0 consumeBlock:(id /* block */)a1 rockReturningConsumeBlock:(id /* block */)a2;
- (void)waitForConsumers;
- (void)waitForConsumersWithGatheredRocks:(id /* block */)a0;

@end
