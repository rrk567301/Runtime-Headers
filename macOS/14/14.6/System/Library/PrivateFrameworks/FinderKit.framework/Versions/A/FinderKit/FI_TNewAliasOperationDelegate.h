@interface FI_TNewAliasOperationDelegate : FI_TFileSystemOperationDelegate {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct __compressed_pair<TFENode *, std::allocator<TFENode>> { struct TFENode *__value_; } __end_cap_; } _aliases;
}

@property BOOL allowInteraction;
@property struct function<bool (FI_TNewAliasOperation *, TFENodeVector &&)> { struct __value_func<bool (FI_TNewAliasOperation *, TFENodeVector &&)> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } processAliases;

+ (id)makeDelegate;

- (void).cxx_destruct;
- (id).cxx_construct;
- (int)asyncNodeOperation:(id)a0 errorNotification:(const struct TOperationMonitor { struct OpaqueMonitorData *x0; unsigned char x1; struct OperationStatus *x2; unsigned int x3; unsigned int x4; struct DSSemaphore *x5; struct OpaqueEventQueue *x6; void /* function */ *x7; void /* function */ *x8; int x9; id /* block */ x10; } *)a1 error:(const struct OperationErrorRecord { int x0; unsigned int x1; unsigned int x2; char x3[1024]; BOOL x4; id x5; } *)a2 reply:(struct NodeEventReply { struct DSSemaphore *x0; unsigned int x1; int x2; } *)a3;
- (int)asyncNodeOperation:(id)a0 subOperationCompleted:(unsigned int)a1 targetNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (int)asyncNodeOperation:(id)a0 uniqueNameProc:(id)a1 seedFileSuffix:(id)a2 reservedName:(id)a3;

@end
