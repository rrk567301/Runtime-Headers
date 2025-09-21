@class PKPackageSpecifier;

@interface PKPatchFilesInstallOperation : PKInstallOperation {
    PKPackageSpecifier *_currentPackageSpecifier;
    char _useAFSCByDefault;
}

- (int)installState;
- (void)main;
- (id)currentPackageSpecifier;

@end
