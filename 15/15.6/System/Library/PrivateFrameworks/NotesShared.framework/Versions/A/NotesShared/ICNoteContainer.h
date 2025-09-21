@class NSData, NSString, NSArray, NSManagedObjectContext, ICTTOrderedSetVersionedDocument, ICFolderCustomNoteSortType, ICCROrderedSet, ICAccount;

@interface ICNoteContainer : ICCloudSyncingObject <ICNoteContainer>

@property (retain, nonatomic) ICAccount *owner;
@property (retain, nonatomic) NSString *accountNameForAccountListSorting;
@property (nonatomic) char isHiddenNoteContainer;
@property (retain, nonatomic) NSString *nestedTitleForSorting;
@property (retain, nonatomic) ICTTOrderedSetVersionedDocument *subFolderIdentifiersOrderedSetDocument;
@property (readonly, copy, nonatomic) NSString *cacheKey;
@property (nonatomic) int sortOrder;
@property (readonly, nonatomic) ICCROrderedSet *subFolderIdentifiersOrderedSet;
@property (nonatomic, getter=isSubFolderOrderMergeableDataDirty) char subFolderOrderMergeableDataDirty;
@property (nonatomic) int dateHeadersType;
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

+ (id)keyPathsForValuesAffectingCloudAccount;

- (void).cxx_destruct;
- (void)willRefresh:(char)a0;
- (void)willSave;
- (void)willTurnIntoFault;
- (id)cloudAccount;
- (void)applyDateHeadersType:(int)a0;
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
- (void)writeSubFolderMergeableData;

@end
