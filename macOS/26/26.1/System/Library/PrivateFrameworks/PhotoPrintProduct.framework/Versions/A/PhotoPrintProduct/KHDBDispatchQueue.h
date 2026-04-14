@class NSObject;
@protocol OS_dispatch_queue;

@interface KHDBDispatchQueue : NSObject {
    int _count;
}

@property (nonatomic) long long maxConcurrentOperationCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *runQueue;

- (void)addOperation:(id)a0;
- (void)dealloc;
- (unsigned long long)count;
- (void)addBlock:(id /* block */)a0;
- (id)init;
- (void)waitUntilAllOperationsAreFinished;

@end
