@class CKSQLitePackage, NSString, NSIndexSet, NSData, CKDMMCSItem, CKRecord, CKPackageDatabaseReference;

@interface CKConcretePackage : CKPackage <NSSecureCoding> {
    CKPackageDatabaseReference *_sqlitePackageRef;
    CKSQLitePackage *_sqlitePackage;
    NSIndexSet *_downloadItemIndices;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) CKRecord *record;
@property (copy, nonatomic) NSString *recordKey;
@property (copy, nonatomic) NSIndexSet *downloadItemIndices;
@property (retain, nonatomic) CKDMMCSItem *manifestItem;
@property (nonatomic) BOOL shouldReadRawEncryptedData;
@property (copy, nonatomic) NSData *verificationKey;
@property (nonatomic) long long storageGroupingPolicy;
@property (nonatomic) long long uploadRank;
@property (nonatomic) struct _OpaquePCSShareProtection { } *recordPCS;
@property (nonatomic) BOOL uploaded;
@property (nonatomic) BOOL downloaded;

+ (unsigned long long)packageCount:(id *)a0;
+ (id)packageDirectoryForBundleID:(id)a0;
+ (id)packageForBundleID:(id)a0 error:(id *)a1;
+ (id)packageWithPackageRef:(id)a0;

- (id)addItem:(id)a0;
- (id)UUID;
- (id)signature;
- (unsigned long long)itemCount;
- (id)boundaryKey;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)sectionCount;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)setBoundaryKey:(id)a0;
- (void).cxx_destruct;
- (id)packageDatabase;
- (id)anchorWithExpirationDate:(id)a0 error:(id *)a1;
- (id)addSection:(id)a0;
- (id)assetTransferOptions;
- (id)enumerateItemsInSection:(unsigned long long)a0 withBlock:(id /* block */)a1;
- (id)initWithSQLitePackageRef:(id)a0;
- (id)itemAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)itemEnumerator;
- (id)packageID;
- (id)packageReference;
- (unsigned long long)paddedSizeOfSectionAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)prepareForSectionPlanning;
- (id)sectionAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)sectionEnumerator;
- (void)setAssetTransferOptions:(id)a0;
- (void)setPackageReference:(id)a0;
- (id)setSignature:(id)a0 verificationKey:(id)a1;
- (unsigned long long)size:(id *)a0;
- (unsigned long long)sizeOfSectionAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)updateItem:(id)a0 withSignature:(id)a1 size:(unsigned long long)a2 paddedSize:(unsigned long long)a3 itemID:(unsigned long long)a4 sectionIndex:(id)a5;
- (id)updateItemsAtIndexes:(id)a0 fileURLs:(id)a1;

@end
