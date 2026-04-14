@class NSArray, NSString;

@interface CKPackage : NSObject <NSSecureCoding, CKRecordValue>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL useMMCSEncryptionV2;
@property (copy, nonatomic) NSArray *assets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)liftAnchor:(id)a0;
+ (id)packageFromAnchor:(id)a0 error:(id *)a1;
+ (id)clonedPackageWithRecordID:(id)a0 databaseScope:(long long)a1 fieldName:(id)a2 error:(id *)a3;
+ (Class)classForCoder;
+ (id)packageWithPackage:(id)a0 error:(id *)a1;
+ (id)packageWithError:(id *)a0;
+ (id)descriptionOfAnchor:(id)a0;

- (id)addItem:(id)a0;
- (BOOL)isReference;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)itemCount;
- (id)boundaryKey;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)UUID;
- (id)setBoundaryKey:(id)a0;
- (id)packageDatabase;
- (id)anchorWithExpirationDate:(id)a0 error:(id *)a1;
- (id)archiverInfo;
- (id)assetTransferOptions;
- (id)clonedPackageWithBundle:(id)a0 filesDuplicatedIntoDirectory:(id)a1 error:(id *)a2;
- (BOOL)deleteFilesWithError:(id *)a0;
- (id)itemAtIndex:(unsigned long long)a0 error:(id *)a1;
- (id)itemEnumerator;
- (id)packageID;
- (BOOL)setArchiverInfo:(id)a0 error:(id *)a1;
- (void)setAssetTransferOptions:(id)a0;

@end
