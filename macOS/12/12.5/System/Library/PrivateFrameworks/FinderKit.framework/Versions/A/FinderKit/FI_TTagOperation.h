@class FI_TTagOperationDelegate;

@interface FI_TTagOperation : FI_IAsyncNodeOperation {
    struct shared_ptr<TTagsTask> { struct TTagsTask *__ptr_; struct __shared_weak_count *__cntrl_; } _task;
    FI_TTagOperationDelegate *_opDelegate;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)runOperation;
- (int)cancelOperation;
- (id)initWithNodes:(const void *)a0 forTask:(const void *)a1;
- (int)startSubOperation:(unsigned int)a0;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })authorizationPrompt;
- (void)configureOperationRecord:(struct TOperationRecord { struct OperationRecord { struct OpaqueNodeRef *x0; struct OpaqueNodeRef *x1; struct PropertyList *x2; unsigned int x3; unsigned int x4; struct HFSUniStr255 { unsigned short x0; unsigned short x1[255]; } x5; struct OpaqueNodeRef *x6; struct OpaqueNodeRef *x7; struct OpaqueNodeRef *x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; long long x13; long long x14; long long x15; long long x16; unsigned char x17; unsigned char x18; } x0; struct TFENode { struct OpaqueNodeRef *x0; } x1; struct TFENode { struct OpaqueNodeRef *x0; } x2; struct TFENode { struct OpaqueNodeRef *x0; } x3; } *)a0 forIndex:(unsigned long long)a1;

@end
