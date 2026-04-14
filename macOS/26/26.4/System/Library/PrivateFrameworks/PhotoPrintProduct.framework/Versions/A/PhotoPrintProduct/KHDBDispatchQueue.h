@class NSObject;
@protocol OS_dispatch_queue;

@interface KHDBDispatchQueue : NSObject {
    int _count;
}

@property (nonatomic) long long maxConcurrentOperationCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *runQueue;

- (void)addBlock:(id /* block */)a0;
- (void)addOperation:(id)a0;
- (id)init;
- (unsigned long long)count;
- (void)dealloc;
- (void)waitUntilAllOperationsAreFinished;

@end
