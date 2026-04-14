@class NSData, NSString, NSArray, NSManagedObjectContext, ICTTOrderedSetVersionedDocument, ICFolderCustomNoteSortType, ICCROrderedSet, ICAccount;

@interface ICNoteContainer : ICCloudSyncingObject <ICNoteContainer>

@property (retain, nonatomic) ICAccount *owner;
@property (retain, nonatomic) NSString *accountNameForAccountListSorting;
@property (nonatomic) BOOL isHiddenNoteContainer;
@property (retain, nonatomic) NSString *nestedTitleForSorting;
@property (retain, nonatomic) ICTTOrderedSetVersionedDocument *subFolderIdentifiersOrderedSetDocument;
@property (readonly, copy, nonatomic) NSString *cacheKey;
@property (nonatomic) int sortOrder;
@property (readonly, nonatomic) ICCROrderedSet *subFolderIdentifiersOrderedSet;
@property (nonatomic, getter=isSubFolderOrderMergeableDataDirty) BOOL subFolderOrderMergeableDataDirty;
@property (nonatomic) long long dateHeadersType;
@property (readonly, nonatomic) ICAccount *noteContainerAccount;
@property (readonly) NSManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
@property (readonly, nonatomic) BOOL isSharedViaICloud;
@property (readonly, nonatomic) BOOL isSharedReadOnly;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (readonly, nonatomic) BOOL canBeSharedViaICloud;
@property (readonly, nonatomic) BOOL supportsEditingNotes;
@property (readonly, nonatomic) BOOL isTrashFolder;
@property (readonly, nonatomic) BOOL isModernCustomFolder;
@property (readonly, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic) NSArray *visibleNotes;
@property (readonly, nonatomic) BOOL supportsDateHeaders;
@property (readonly, nonatomic) BOOL isShowingDateHeaders;
@property (readonly, nonatomic) unsigned long long visibleNotesCount;
@property (readonly, copy, nonatomic) NSString *titleForNavigationBar;
@property (readonly, copy, nonatomic) NSString *titleForTableViewCell;
@property (readonly, copy, nonatomic) NSString *accountName;
@property (readonly, nonatomic) NSArray *visibleSubFolders;
@property (copy, nonatomic) NSData *subFolderOrderMergeableData;
@property (readonly, nonatomic, getter=isDeleted) BOOL deleted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingCloudAccount;

- (void)willTurnIntoFault;
- (id)noteVisibilityTestingForSearchingAccount;
- (void)willSave;
- (id)predicateForVisibleNotes;
- (BOOL)noteIsVisible:(id)a0;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (void).cxx_destruct;
- (void)applyDateHeadersType:(long long)a0;
- (id)predicateForSearchableNotes;
- (id)predicateForSearchableAttachments;
- (id)predicateForPinnedNotes;
- (void)updateSubFolderMergeableDataChangeCount;
- (id)cloudAccount;
- (BOOL)mergeWithSubFolderMergeableData:(id)a0;
- (void)saveSubFolderMergeableDataIfNeeded;
- (void)willRefresh:(BOOL)a0;
- (void)writeSubFolderMergeableData;

@end
