@class BRFieldContentSignature, NSString, BRCItemGlobalID, NSError, CKRecord;

@interface BRCLocalVersion : BRCVersion

@property (retain, nonatomic) CKRecord *uploadedAssets;
@property (retain, nonatomic) NSError *uploadError;
@property (retain, nonatomic) BRCItemGlobalID *prevZoneGlobalID;
@property (readonly, nonatomic) BRFieldContentSignature *versionSignature;
@property (readonly, nonatomic) unsigned long long localChangeCount;
@property (retain, nonatomic) NSString *oldVersionIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithVersion:(id)a0;
- (id)initFromResultSet:(id)a0 pos:(int)a1;
- (void)sqliteBind:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (id)descriptionWithContext:(id)a0;
- (id)isPackageObj;
- (id)sizeObj;
- (unsigned long long)diffAgainstLocalVersion:(id)a0;
- (id)initForPackage:(BOOL)a0;
- (id)initWithServerVersion:(id)a0;
- (id)initWithLocalVersion:(id)a0;
- (BOOL)shouldRecreateUploadJobGivenDiffs:(unsigned long long)a0;
- (BOOL)isMissingUploadsWithDiffs:(unsigned long long)a0 isDocumentSyncPaused:(BOOL)a1 isDocumentResumingSync:(BOOL)a2;
- (void)_clearSignatures:(unsigned long long)a0 isPackage:(BOOL)a1;
- (void)updateServerFieldsFromVersion:(id)a0;
- (void)clearCKInfo;
- (void)bumpLocalChangeCount;
- (id)initWithImportObject:(id)a0;
- (void)updateWithImportObject:(id)a0 onlyContentDependentProperties:(BOOL)a1;

@end
