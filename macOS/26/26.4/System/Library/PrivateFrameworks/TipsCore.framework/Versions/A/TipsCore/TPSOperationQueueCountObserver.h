@class TPSOperationQueue;

@interface TPSOperationQueueCountObserver : NSObject

@property (nonatomic) unsigned long long lastOperationCount;
@property (weak, nonatomic) TPSOperationQueue *operationQueue;
@property (copy, nonatomic) id /* block */ completionBlock;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
