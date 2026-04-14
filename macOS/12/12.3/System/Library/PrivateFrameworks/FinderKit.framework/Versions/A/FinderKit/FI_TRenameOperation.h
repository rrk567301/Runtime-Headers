@interface FI_TRenameOperation : FI_TFileSystemOperation

- (struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })authorizationPrompt;
- (id)makeDelegate;
- (void)setUpOperationRecordForIndex:(unsigned long long)a0 withName:(const void *)a1 andExtensionState:(struct TriStateBool { int x0; })a2;
- (void)configureOperationRecord:(struct TOperationRecord { struct OperationRecord { struct OpaqueNodeRef *x0; struct OpaqueNodeRef *x1; struct PropertyList *x2; unsigned int x3; unsigned int x4; struct HFSUniStr255 { unsigned short x0; unsigned short x1[255]; } x5; struct OpaqueNodeRef *x6; struct OpaqueNodeRef *x7; struct OpaqueNodeRef *x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; long long x13; long long x14; long long x15; long long x16; unsigned char x17; unsigned char x18; } x0; struct TFENode { struct OpaqueNodeRef *x0; } x1; struct TFENode { struct OpaqueNodeRef *x0; } x2; struct TFENode { struct OpaqueNodeRef *x0; } x3; } *)a0 forNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;

@end
