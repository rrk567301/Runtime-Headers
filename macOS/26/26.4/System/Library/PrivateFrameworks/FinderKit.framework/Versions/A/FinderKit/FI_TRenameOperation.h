@interface FI_TRenameOperation : FI_TFileSystemOperation

- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })authorizationPrompt;
- (id)makeDelegate;
- (void)setUpOperationRecordForIndex:(unsigned long long)a0 withName:(const void *)a1 andExtensionState:(struct optional_bool { union { char x0; BOOL x1; } x0; BOOL x1; })a2;

@end
