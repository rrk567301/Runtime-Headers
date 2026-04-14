@class NSHashTable, NSMutableArray;

@interface _DKSyncCompositeOperation : _DKSyncOperation {
    _DKSyncCompositeOperation *_parent;
    _Atomic BOOL _isReadyToStart;
    NSHashTable *_children;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSMutableArray *errors;

- (BOOL)isAsynchronous;
- (BOOL)isReady;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithParent:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_shutdownOperation;
- (void)childOperation:(id)a0 didEndWithErrors:(id)a1;
- (void)childOperationWasAdded:(id)a0;
- (void)endOperation;
- (void)setReadyToStart:(BOOL)a0;

@end
