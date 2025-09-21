@class NSMutableArray;

@interface _DKSyncBlockOperation : _DKSyncOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSMutableArray *blocks;
@property (getter=isAsynchronous) char asynchronous;

+ (id)blockOperationWithBlock:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addExecutionBlock:(id /* block */)a0;
- (id)executionBlocks;
- (id)initWithBlock:(id /* block */)a0;
- (void)main;

@end
