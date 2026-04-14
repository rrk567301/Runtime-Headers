@interface CKInvalidPackage : CKPackage

- (id)boundaryKey;
- (id)addItem:(id)a0;
- (unsigned long long)itemCount;
- (id)setBoundaryKey:(id)a0;
- (id)UUID;
- (id)anchorWithExpirationDate:(id)a0 error:(id *)a1;
- (id)archiverInfo;
- (id)assetTransferOptions;
- (id)invalidPackageError:(id *)a0;
- (id)itemAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)itemEnumerator;
- (id)packageID;
- (BOOL)setArchiverInfo:(id)a0 error:(id *)a1;
- (void)setAssetTransferOptions:(id)a0;

@end
