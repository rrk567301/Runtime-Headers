@class NSHashTable, NSMutableArray;

@interface _DKSyncCompositeOperation : _DKSyncOperation {
    _DKSyncCompositeOperation *_parent;
    _Atomic char _isReadyToStart;
    NSHashTable *_children;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSMutableArray *errors;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)isReady;
- (void)cancel;
- (char)isAsynchronous;
- (id)initWithParent:(id)a0;
- (void)_shutdownOperation;
- (void)childOperation:(id)a0 didEndWithErrors:(id)a1;
- (void)childOperationWasAdded:(id)a0;
- (void)endOperation;
- (void)setReadyToStart:(char)a0;

@end
