@class PKPackageSpecifier;

@interface PKPatchFilesInstallOperation : PKInstallOperation {
    PKPackageSpecifier *_currentPackageSpecifier;
    struct CompressionQueueContext_s { } *_compressionQueue;
    BOOL _useAFSCByDefault;
}

- (int)installState;
- (void)main;
- (id)currentPackageSpecifier;

@end
