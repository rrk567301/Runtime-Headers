@class PKPackageSpecifier, NSString;

@interface PKRelocateComponentsInstallOperation : PKInstallOperation {
    PKPackageSpecifier *_currentPackageSpecifier;
    NSString *_currentOldBundlePath;
    NSString *_currentNewBundlePath;
}

- (int)installState;
- (void)main;
- (id)messageTracerDomain;
- (id)messageTracerComment;
- (id)currentPackageSpecifier;
- (id)messageTracerTernarySignature;
- (BOOL)_moveRelocatedComponentsForPackageSpecifier:(id)a0 error:(id *)a1;

@end
