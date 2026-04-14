@class CKPackageDatabase, CKPackageSectionTable, CKPackageItemTable, CKPackageInfo;

@interface CKSQLitePackage : CKSQLiteTableGroup {
    CKPackageInfo *_packageInfo;
    CKPackageDatabase *_packageDB;
    CKPackageItemTable *_items;
    CKPackageSectionTable *_sections;
}

+ (double)expirationTime;
+ (id)existingPackageInDatabase:(id)a0 packageID:(id)a1 error:(id *)a2;
+ (id)newPackageInDatabase:(id)a0 error:(id *)a1;

- (id)signature;
- (id)addItem:(id)a0;
- (void)createTables;
- (id)setBoundaryKey:(id)a0;
- (id)description;
- (id)bundleID;
- (id)boundaryKey;
- (unsigned long long)sectionCount;
- (unsigned long long)itemCount;
- (id)verificationKey;
- (void).cxx_destruct;
- (id)anchorWithExpirationDate:(id)a0 error:(id *)a1;
- (id)addSection:(id)a0;
- (id)allItemsWithError:(id *)a0;
- (id)assetTransferOptions;
- (id)copyItemsFromPackage:(id)a0;
- (id)enumerateItemsInSection:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (id)finishInitializing;
- (id)itemAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)itemEnumerator;
- (id)packageID;
- (id)packageReference;
- (unsigned long long)paddedSizeOfSectionAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)prepareForSectionPlanning;
- (id)sectionAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)sectionEnumerator;
- (id)setAssetTransferOptions:(id)a0;
- (id)setPackageReference:(id)a0;
- (id)setSignature:(id)a0 verificationKey:(id)a1;
- (unsigned long long)size:(id *)a0;
- (unsigned long long)sizeOfSectionAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)updateItem:(id)a0 withSignature:(id)a1 size:(unsigned long long)a2 paddedSize:(unsigned long long)a3 itemID:(unsigned long long)a4 sectionIndex:(id)a5;
- (id)updateItemsAtIndexes:(id)a0 fileURLs:(id)a1;

@end
