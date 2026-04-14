@class PKPackageSpecifier;

@interface PKWriteReceiptsInstallOperation : PKInstallOperation {
    PKPackageSpecifier *_currentPackageSpecifier;
    BOOL _inSandbox;
}

- (int)installState;
- (void)main;
- (id)currentPackageSpecifier;
- (id)messageTracerDomain;
- (id)messageTracerComment;
- (BOOL)_shouldWriteReceiptForPackageSpecifier:(id)a0;
- (id)_newMasterBOMIfEnabled;
- (BOOL)_saveReceiptForPackageSpecifier:(id)a0 withMasterBOM:(id)a1 error:(id *)a2;

@end
