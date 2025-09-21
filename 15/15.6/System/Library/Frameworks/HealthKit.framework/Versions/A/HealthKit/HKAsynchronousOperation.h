@interface HKAsynchronousOperation : NSOperation {
    id /* block */ _operationBlock;
    char _executing;
    char _finished;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    double _startedTime;
}

@property (getter=isExecuting) char executing;
@property (getter=isFinished) char finished;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (char)isAsynchronous;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithName:(id)a0 operationBlock:(id /* block */)a1;

@end
