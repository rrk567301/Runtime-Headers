@class NSObject;
@protocol OS_dispatch_queue;

@interface CKVConcurrentQueue : CKVQueue {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)enqueue:(id)a0;
- (id)dequeue;

@end
