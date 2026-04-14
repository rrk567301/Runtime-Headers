@class NSString, BRCGenerationID, NSData;

@interface BRCPackageItem : NSObject <PQLResultSetInitializer> {
    NSString *_symlinkContent;
    NSData *_contentSignature;
    BOOL _isDirty;
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
@property (readonly, nonatomic) BOOL isFile;
@property (readonly, nonatomic) BOOL isSymLink;
@property (readonly, nonatomic) BOOL isDirectory;
@property (readonly, nonatomic) long long mtime;
@property (readonly, nonatomic) long long size;
@property (readonly, nonatomic) char mode;
@property (readonly, nonatomic) NSData *contentSignature;
@property (readonly, nonatomic) NSData *quarantineInfo;
@property (readonly, nonatomic) NSString *symlinkContent;
@property (readonly, nonatomic) NSData *xattrSignature;

+ (id)packageItemsForItem:(id)a0 order:(unsigned long long)a1;
+ (BOOL)updateSignaturesForFilesInItem:(id)a0 fromCKPackage:(id)a1 error:(id *)a2;
+ (BOOL)dumpSession:(id)a0 toContext:(id)a1 db:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (void)_setXattrs:(id)a0 session:(id)a1;
- (id)initWithPBItem:(id)a0 forLocalItem:(id)a1;
- (BOOL)saveToDBWithSession:(id)a0;
- (id)initFromPQLResultSet:(id)a0 session:(id)a1 error:(id *)a2;

@end
