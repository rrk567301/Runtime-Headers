@class NSString, BRCGenerationID, NSData;

@interface BRCPackageItem : NSObject <PQLResultSetInitializer> {
    NSString *_symlinkContent;
    NSData *_contentSignature;
    char _isDirty;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long itemRowID;
@property (readonly, nonatomic) unsigned long long fileID;
@property (readonly, nonatomic) BRCGenerationID *generationID;
@property (readonly, nonatomic) NSString *pathInPackage;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) long long assetRank;
@property (readonly, nonatomic) char isFile;
@property (readonly, nonatomic) char isSymLink;
@property (readonly, nonatomic) char isDirectory;
@property (readonly, nonatomic) long long mtime;
@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) char mode;
@property (readonly, nonatomic) NSData *contentSignature;
@property (readonly, nonatomic) NSData *quarantineInfo;
@property (readonly, nonatomic) NSString *symlinkContent;
@property (readonly, nonatomic) NSData *xattrSignature;

+ (char)dumpSession:(id)a0 toContext:(id)a1 db:(id)a2 error:(id *)a3;
+ (long long)largestPackageItemSizeInItemRowID:(unsigned long long)a0 session:(id)a1;
+ (id)newItemForSignatureCalculationWithURL:(id)a0 inPackage:(id)a1 boundaryKey:(id)a2 error:(id *)a3;
+ (id)packageItemsForFileObjectID:(id)a0 order:(unsigned long long)a1 db:(id)a2;
+ (id)packageItemsForItem:(id)a0 order:(unsigned long long)a1;
+ (id)packageItemsForItemRowID:(unsigned long long)a0 order:(unsigned long long)a1 db:(id)a2;
+ (char)updateSignaturesForFilesInItem:(id)a0 fromCKPackage:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)initFromPQLResultSet:(id)a0 error:(id *)a1;
- (id)_initWithURL:(id)a0 inPackage:(id)a1 forItem:(id)a2 error:(id *)a3;
- (void)_setXattrs:(id)a0 xattrStager:(id)a1;
- (id)initWithPBItem:(id)a0 forLocalItem:(id)a1;
- (id)initWithURL:(id)a0 inPackage:(id)a1 forItem:(id)a2 error:(id *)a3;
- (char)saveToDBWithSession:(id)a0;
- (char)updateContentSignature:(id)a0 boundaryKey:(id)a1 error:(id *)a2;

@end
