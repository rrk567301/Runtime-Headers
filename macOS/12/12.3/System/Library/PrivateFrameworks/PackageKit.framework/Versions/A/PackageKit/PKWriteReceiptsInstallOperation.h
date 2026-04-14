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
- (id)initWithRequest:(id)a0 sandbox:(id)a1 analyzer:(id)a2 writeInSandbox:(BOOL)a3;
- (BOOL)_shouldWriteReceiptForPackageSpecifier:(id)a0;
- (id)_newMasterBOMIfEnabled;
- (BOOL)_saveReceiptForPackageSpecifier:(id)a0 withMasterBOM:(id)a1 error:(id *)a2;

@end
