@class CKPackageReferenceTable, CKPackageDirectoryTable;

@interface CKPackageDatabase : CKSQLiteTableGroup {
    CKPackageDirectoryTable *_directoryTable;
    CKPackageReferenceTable *_referenceTable;
}

+ (id)descriptionOfAnchor:(id)a0;
+ (id)packageFromAnchor:(id)a0 error:(id *)a1;
+ (id)liftAnchor:(id)a0;
+ (id)packageDatabasePathForBundleID:(id)a0;
+ (id)_bundleIdForCurrentProcess;
+ (id)_usingAnchor:(id)a0 performBlock:(id /* block */)a1;
+ (unsigned long long)packageCount:(id *)a0;
+ (id)packageDatabaseForBundleID:(id)a0 error:(id *)a1;
+ (id)packageDatabaseInSQLiteDatabase:(id)a0 error:(id *)a1;

- (id)bundleID;
- (void)createTables;
- (void).cxx_destruct;
- (id)anchorWithPackageInfo:(id)a0 expirationDate:(id)a1 error:(id *)a2;
- (id)deleteReference:(id)a0;
- (id)existingPackage:(id)a0 error:(id *)a1;
- (id)fetchSignatureAndVerificationKey:(id)a0;
- (id)finishInitializing;
- (id)newPackage:(id *)a0;
- (id)newProcessReferenceForPackage:(id)a0 error:(id *)a1;
- (unsigned long long)packageCount:(id *)a0;
- (id)packageInfoForNewPackageWithID:(id)a0 error:(id *)a1;
- (id)packageReferenceFromAnchorDictionary:(id)a0 error:(id *)a1;
- (id)refcountBecameZeroForPackage:(id)a0 packageID:(id)a1;
- (unsigned long long)referenceCountForPackageID:(id)a0 error:(id *)a1;
- (id)referenceWithID:(id)a0 error:(id *)a1;
- (id)updateAssetTransferOptions:(id)a0;
- (id)updateBoundaryKey:(id)a0;
- (id)updatePackageReference:(id)a0;
- (id)updateSignatureAndVerificationKey:(id)a0;

@end
