@class NSMutableArray;

@interface HandlerQueue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_queue;
    BOOL _isBusy;
    long long _deferredDequeue;
}

+ (id)sharedHandlerQueue;

- (void)queueBlock:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (id /* block */)_dequeueBlock;
- (void)_executeFromQueue;

@end
