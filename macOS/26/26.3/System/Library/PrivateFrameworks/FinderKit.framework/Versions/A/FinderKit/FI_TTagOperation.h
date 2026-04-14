@interface FI_TTagOperation : FI_IAsyncNodeOperation {
    struct shared_ptr<TTagsTask> { struct TTagsTask *__ptr_; struct __shared_weak_count *__cntrl_; } _task;
}

- (int)cancelOperation;
- (void).cxx_destruct;
- (void)runOperation;
- (id).cxx_construct;
- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })authorizationPrompt;
- (struct shared_ptr<TOperationRecord> { struct TOperationRecord *x0; struct __shared_weak_count *x1; })configureOperationRecordForIndex:(unsigned long long)a0;
- (id)initWithNodes:(const void *)a0 forTask:(const void *)a1;
- (int)startSubOperation:(unsigned int)a0;

@end
