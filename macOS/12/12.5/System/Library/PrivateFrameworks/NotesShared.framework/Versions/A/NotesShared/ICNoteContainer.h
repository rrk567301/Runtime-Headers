@class TTOrderedSetVersionedDocument, NSString, NSNumber, NSManagedObjectContext, NSArray, NSData, ICFolderCustomNoteSortType, CROrderedSet, ICAccount;

@interface ICNoteContainer : ICCloudSyncingObject <ICNoteContainer>

@property (retain, nonatomic) ICAccount *owner;
@property (retain, nonatomic) NSString *accountNameForAccountListSorting;
@property (nonatomic) BOOL isHiddenNoteContainer;
@property (retain, nonatomic) NSString *nestedTitleForSorting;
@property (retain, nonatomic) TTOrderedSetVersionedDocument *subFolderIdentifiersOrderedSetDocument;
@property (nonatomic) int sortOrder;
@property (readonly, nonatomic) CROrderedSet *subFolderIdentifiersOrderedSet;
@property (nonatomic, getter=isSubFolderOrderMergeableDataDirty) BOOL subFolderOrderMergeableDataDirty;
@property (retain, nonatomic) NSNumber *transientNoteCount;
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

+ (id)keyPathsForValuesAffectingCloudAccount;

- (void).cxx_destruct;
- (id)accountName;
- (void)willRefresh:(BOOL)a0;
- (void)willSave;
- (void)willTurnIntoFault;
- (id)cacheKey;
- (id)cloudAccount;
- (id)predicateForPinnedNotes;
- (id)predicateForVisibleNotes;
- (void)saveSubFolderMergeableDataIfNeeded;
- (void)writeSubFolderMergeableData;
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

@end
