@class NSString, NSArray, NSData, ICAccount, ICFolderCustomNoteSortType, NSManagedObjectContext;

@interface ICAccountProxy : NSObject <ICNoteContainer>

@property (retain) ICAccount *account;
@property (readonly, nonatomic) ICAccount *noteContainerAccount;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
@property (readonly, nonatomic) char isSharedViaICloud;
@property (readonly, nonatomic) char isSharedReadOnly;
@property (readonly, nonatomic) char isAllNotesContainer;
@property (readonly, nonatomic) char canBeSharedViaICloud;
@property (readonly, nonatomic) char supportsEditingNotes;
@property (readonly, nonatomic) char isTrashFolder;
@property (readonly, nonatomic) char isModernCustomFolder;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) NSArray *visibleNotes;
@property (readonly, nonatomic) char supportsDateHeaders;
@property (readonly, nonatomic) int dateHeadersType;
@property (readonly, nonatomic) char isShowingDateHeaders;
@property (readonly, nonatomic) unsigned long long visibleNotesCount;
@property (readonly, copy, nonatomic) NSString *titleForNavigationBar;
@property (readonly, copy, nonatomic) NSString *titleForTableViewCell;
@property (readonly, copy, nonatomic) NSString *accountName;
@property (readonly, nonatomic) NSArray *visibleSubFolders;
@property (copy, nonatomic) NSData *subFolderOrderMergeableData;
@property (readonly, nonatomic, getter=isDeleted) char deleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)accountProxyWithAccount:(id)a0;
+ (id)keyPathsForValuesAffectingVisibleNotesCount;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)objectID;
- (char)isLeaf;
- (id)initWithAccount:(id)a0;
- (void)applyDateHeadersType:(int)a0;
- (id)customNoteSortTypeValue;
- (char)mergeWithSubFolderMergeableData:(id)a0;
- (char)noteIsVisible:(id)a0;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)predicateForPinnedNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)predicateForVisibleNotes;
- (void)saveSubFolderMergeableDataIfNeeded;
- (char)supportsVisibilityTestingType:(long long)a0;
- (void)updateSubFolderMergeableDataChangeCount;
- (id)visibleNoteContainerChildren;

@end
