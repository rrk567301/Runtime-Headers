@class PKPackageSpecifier;

@interface PKPatchFilesInstallOperation : PKInstallOperation {
    PKPackageSpecifier *_currentPackageSpecifier;
    struct CompressionQueueContext_s { } *_compressionQueue;
    BOOL _useAFSCByDefault;
}

- (int)installState;
- (void)main;
- (id)currentPackageSpecifier;
- (BOOL)isCompressionEnabledForCurrentPackage;
- (void)queueSandboxFileForCompression:(id)a0;
- (BOOL)shouldPatchFileAtSubpath:(id)a0 inComponent:(id)a1;
- (BOOL)patchFileAtSubpath:(id)a0 inComponent:(id)a1 atSandboxPrefix:(id)a2 onDiskPrefix:(id)a3 withRequirements:(id)a4 error:(id *)a5;
- (void)createCompressionQueue;
- (BOOL)applyPatchesForPackageSpecifier:(id)a0 error:(id *)a1;
- (void)finishCompressionQueue;
- (BOOL)isBackwardsIncompatibleCompressionEnabledForCurrentPackage;

@end
