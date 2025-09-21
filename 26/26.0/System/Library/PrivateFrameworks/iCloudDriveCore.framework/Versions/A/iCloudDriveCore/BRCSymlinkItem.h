@class NSString, BRCDocumentItem, BRCDirectoryItem, BRCAliasItem;
@protocol BRCFSRooted;

@interface BRCSymlinkItem : BRCLocalItem

@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) BRCDirectoryItem<BRCFSRooted> *asFSRoot;
@property (readonly, nonatomic) NSString *symlinkTarget;

- (id)_initWithImportObject:(id)a0 error:(id *)a1;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (void)updateSymlinkTarget:(id)a0;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (unsigned long long)diffAgainstLocalItem:(id)a0;
- (id)asSymlink;
- (BOOL)isSymLink;
- (id)descriptionWithContext:(id)a0;
- (id)_initWithLocalItem:(id)a0;
- (BOOL)updateWithImportObject:(id)a0 onlyContentDependentProperties:(BOOL)a1 error:(id *)a2;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (void).cxx_destruct;

@end
