@class PKPackageSpecifier;

@interface PKPatchFilesInstallOperation : PKInstallOperation {
    PKPackageSpecifier *_currentPackageSpecifier;
    BOOL _useAFSCByDefault;
}

- (void)main;
- (int)installState;
- (id)currentPackageSpecifier;

@end
