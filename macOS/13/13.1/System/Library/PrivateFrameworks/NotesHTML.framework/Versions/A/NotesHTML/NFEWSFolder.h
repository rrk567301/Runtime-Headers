@class NSString;

@interface NFEWSFolder : NFFolder

@property (retain, nonatomic) NFEWSFolder *parent;
@property (copy, nonatomic) NSString *changeKey;
@property (copy, nonatomic) NSString *folderId;
@property (nonatomic) BOOL isDistinguished;
@property (copy, nonatomic) NSString *syncState;
@property (nonatomic) BOOL isUnknownType;

+ (Class)noteClass;
+ (id)folderWithFolderId:(id)a0 context:(id)a1;
+ (id)createFolderWithFolderId:(id)a0 context:(id)a1;

- (BOOL)validateValue:(inout id *)a0 forKey:(id)a1 error:(out id *)a2;
- (BOOL)isRemote;
- (id)newNote;
- (id)subfolderWithName:(id)a0;
- (id)newSubfolderWithName:(id)a0;
- (BOOL)validateAccount:(inout id *)a0 error:(out id *)a1;
- (void)trimFolderTreeWithParent:(id)a0;
- (id)createNote;

@end
