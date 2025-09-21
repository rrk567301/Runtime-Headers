@class PKPackageSpecifier;

@interface PKWriteReceiptsInstallOperation : PKInstallOperation {
    PKPackageSpecifier *_currentPackageSpecifier;
    char _inSandbox;
}

- (int)installState;
- (void)main;
- (id)_newMasterBOMIfEnabled;
- (char)_saveReceiptForPackageSpecifier:(id)a0 withMasterBOM:(id)a1 error:(id *)a2;
- (char)_shouldWriteReceiptForPackageSpecifier:(id)a0;
- (id)currentPackageSpecifier;
- (id)messageTracerComment;
- (id)messageTracerDomain;

@end
