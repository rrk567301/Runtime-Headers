@class NSString, NSArray, NSData, ICAccount, ICFolderCustomNoteSortType, NSManagedObjectContext;

@interface ICAccountProxy : NSObject <ICNoteContainer>

@property (retain) ICAccount *account;
@property (readonly, nonatomic) ICAccount *noteContainerAccount;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
@property (readonly, nonatomic) BOOL isSharedViaICloud;
@property (readonly, nonatomic) BOOL isSharedReadOnly;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (readonly, nonatomic) BOOL canBeSharedViaICloud;
@property (readonly, nonatomic) BOOL supportsEditingNotes;
@property (readonly, nonatomic) BOOL isTrashFolder;
@property (readonly, nonatomic) BOOL isSystemPaperFolder;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) NSArray *visibleNotes;
@property (readonly, nonatomic) NSArray *visibleSubFolders;
@property (retain, nonatomic) NSData *subFolderOrderMergeableData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountProxyWithAccount:(id)a0;
+ (id)keyPathsForValuesAffectingVisibleNotesCount;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLeaf;
- (id)accountName;
- (id)initWithAccount:(id)a0;
- (BOOL)isDeleted;
- (id)predicateForPinnedNotes;
- (id)predicateForVisibleNotes;
- (void)saveSubFolderMergeableDataIfNeeded;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (id)predicateForSearchableNotes;
- (id)predicateForSearchableAttachments;
- (BOOL)noteIsVisible:(id)a0;
- (unsigned long long)visibleNotesCount;
- (id)titleForNavigationBar;
- (id)titleForTableViewCell;
- (BOOL)isModernCustomFolder;
- (BOOL)mergeWithSubFolderMergeableData:(id)a0;
- (void)updateSubFolderMergeableDataChangeCount;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)customNoteSortTypeValue;
- (id)visibleNoteContainerChildren;

@end
