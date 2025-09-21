@class NSOperationQueue, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface NSConcreteObservationBuffer : NSObservationBuffer {
    NSObject<OS_dispatch_queue> *_inputQueue;
    NSOperationQueue *_outputQueue;
    long long _policy;
    int _state;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_dequeue;
    unsigned long long _maxCount;
    id /* block */ _bufferFullHandler;
    char _memoryPressureSensitive;
    char _automaticallyEmitsObjects;
}

- (void)dealloc;
- (void)_alreadyOnQueueEmitAllObjects;
- (void)_alreadyOnQueueEmitObject;
- (void)_mergeChanges;
- (void)_receiveBox:(id)a0;
- (char)automaticallyEmitsObjects;
- (id /* block */)bufferFullHandler;
- (void)emitAllObjects;
- (void)emitObject;
- (id)initWithMaximumObjectCount:(unsigned long long)a0 fullPolicy:(long long)a1 outputQueue:(id)a2;
- (char)isMemoryPressureSensitive;
- (void)setAutomaticallyEmitsObjects:(char)a0;
- (void)setBufferFullHandler:(id /* block */)a0;
- (void)setMemoryPressureSensitive:(char)a0;

@end
