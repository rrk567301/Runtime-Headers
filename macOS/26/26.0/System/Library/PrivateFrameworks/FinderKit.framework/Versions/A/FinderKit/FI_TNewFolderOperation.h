@interface FI_TNewFolderOperation : FI_TRenameOperation {
    BOOL _isRenaming;
}

- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })authorizationPrompt;
- (struct shared_ptr<TOperationRecord> { struct TOperationRecord *x0; struct __shared_weak_count *x1; })configureOperationRecordForNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (int)createNewFolder:(const void *)a0 properties:(const void *)a1;
- (id)makeDelegate;
- (void)reconfigureToRenameNodes:(const void *)a0;

@end
