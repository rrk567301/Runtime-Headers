@class BRFieldContentSignature, NSString, BRCItemGlobalID, NSError, CKRecord;

@interface BRCLocalVersion : BRCVersion

@property (retain, nonatomic) CKRecord *uploadedAssets;
@property (retain, nonatomic) NSError *uploadError;
@property (retain, nonatomic) BRCItemGlobalID *previousItemGlobalID;
@property (readonly, nonatomic) BRFieldContentSignature *versionSignature;
@property (readonly, nonatomic) unsigned long long localChangeCount;
@property (retain, nonatomic) NSString *oldVersionIdentifier;

- (void)bumpLocalChangeCount;
- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (id)sizeObj;
- (unsigned long long)diffAgainstLocalVersion:(id)a0;
- (id)initForPackage:(BOOL)a0;
- (id)initWithImportObject:(id)a0;
- (id)initWithLocalVersion:(id)a0;
- (void)clearUploadedAssets;
- (BOOL)isMissingUploadsWithDiffs:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initFromResultSet:(id)a0 pos:(int)a1;
- (id)descriptionWithContext:(id)a0;
- (id)initWithVersion:(id)a0;
- (id)initWithServerVersion:(id)a0;
- (void)_clearSignatures:(unsigned long long)a0 isPackage:(BOOL)a1;
- (void).cxx_destruct;
- (void)updateWithPackageSize:(unsigned long long)a0;
- (void)clearCKInfo;
- (void)updateWithImportObject:(id)a0 onlyContentDependentProperties:(BOOL)a1;
- (BOOL)shouldRecreateUploadJobGivenDiffs:(unsigned long long)a0;
- (void)updateServerFieldsFromVersion:(id)a0;
- (id)isPackageObj;
- (void)_learnVersionFromStoredLocalVersionIdentifier:(id)a0;

@end
