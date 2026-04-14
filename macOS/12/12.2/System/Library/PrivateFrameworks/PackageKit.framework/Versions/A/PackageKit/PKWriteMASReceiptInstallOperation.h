@class PKPackageSpecifier;

@interface PKWriteMASReceiptInstallOperation : PKInstallOperation {
    PKPackageSpecifier *_currentPackageSpecifier;
}

- (int)installState;
- (void)main;
- (id)_receiptPathInBundle:(id)a0;
- (BOOL)_addAppStoreReceipt:(id)a0 withAppStoreMetadata:(id)a1 forPackageSpecifier:(id)a2 error:(id *)a3;

@end
