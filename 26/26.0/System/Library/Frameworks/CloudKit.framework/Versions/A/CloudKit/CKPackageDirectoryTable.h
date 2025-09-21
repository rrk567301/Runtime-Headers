@interface CKPackageDirectoryTable : CKSQLiteTable

+ (Class)entryClass;
+ (id)objectClassesForProperty:(id)a0;
+ (id)dbProperties;

- (id)extendExpirationOfPackage:(id)a0 forReference:(id)a1;
- (id)fetchSignatureAndVerificationKey:(id)a0;
- (id)finishInitializing;
- (id)packageInfoForNewPackageWithID:(id)a0 error:(id *)a1;
- (id)removeExpiredPackages;
- (id)updateAssetTransferOptions:(id)a0;
- (id)updateBoundaryKey:(id)a0;
- (id)updatePackageReference:(id)a0;
- (id)updateSignatureAndVerificationKey:(id)a0;

@end
