@class NSString, BRCDocumentItem, BRCDirectoryItem, BRCAliasItem;
@protocol BRCFSRooted;

@interface BRCSymlinkItem : BRCLocalItem

@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) BRCDirectoryItem<BRCFSRooted> *asFSRoot;
@property (readonly, nonatomic) NSString *symlinkTarget;

- (BOOL)updateWithImportObject:(id)a0 onlyContentDependentProperties:(BOOL)a1 error:(id *)a2;
- (unsigned long long)diffAgainstLocalItem:(id)a0;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (id)_initWithImportObject:(id)a0 error:(id *)a1;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (id)asSymlink;
- (id)_initWithLocalItem:(id)a0;
- (void)updateSymlinkTarget:(id)a0;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)isSymLink;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (id)descriptionWithContext:(id)a0;
- (void).cxx_destruct;

@end
