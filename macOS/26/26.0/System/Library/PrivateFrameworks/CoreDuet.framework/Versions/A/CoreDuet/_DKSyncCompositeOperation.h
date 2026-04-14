@class NSHashTable, NSMutableArray;

@interface _DKSyncCompositeOperation : _DKSyncOperation {
    _DKSyncCompositeOperation *_parent;
    _Atomic BOOL _isReadyToStart;
    NSHashTable *_children;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) NSMutableArray *errors;

- (BOOL)isAsynchronous;
- (void)dealloc;
- (BOOL)isReady;
- (void)cancel;
- (id)init;
- (id)initWithParent:(id)a0;
- (void).cxx_destruct;
- (void)_shutdownOperation;
- (void)childOperation:(id)a0 didEndWithErrors:(id)a1;
- (void)childOperationWasAdded:(id)a0;
- (void)endOperation;
- (void)setReadyToStart:(BOOL)a0;

@end
