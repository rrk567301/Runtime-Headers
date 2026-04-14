@class NSString, BRCDocumentItem, BRCAliasItem;

@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable>

@property (nonatomic) long long mtime;
@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) NSString *unsaltedBookmarkData;

- (BOOL)isDirectory;
- (id)childItemCount;
- (BOOL)isShareableItem;
- (id)asShareableItem;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (BOOL)evictInTask:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)startDownloadInTask:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (BOOL)isDirectoryFault;
- (BOOL)hasShareIDAndIsOwnedByMe;
- (BOOL)isDirectoryWithPackageName;
- (id)collaborationIdentifierIfComputable;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_deleteFromDB:(id)a0 keepAliases:(BOOL)a1 offline:(BOOL)a2;
- (void)_learnItemID:(id)a0 serverItem:(id)a1;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (void)prepareForSyncUpInZone:(id)a0;
- (void)updateItemMetadataFromServerItem:(id)a0 appliedSharingPermission:(BOOL)a1;
- (id)folderRootStructureRecord;
- (BOOL)possiblyContainsSharedItem;
- (BOOL)isSharedByMeOrContainsSharedByMeItem;
- (BOOL)isSharedToMeOrContainsSharedToMeItem;
- (BOOL)containsOverQuotaItems;
- (BOOL)containsDirFault;
- (BOOL)containsFault;
- (BOOL)containsPendingDownload;
- (BOOL)containsPendingUploadOrSyncUp;
- (BOOL)containsPendingDeleteDocuments;
- (void)transformIntoFSRoot;
- (BOOL)hasDeadChildren;
- (BOOL)hasLiveChildren;
- (id)_serverChildItemCount;
- (id)serverQuotaUsage;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)a0;
- (BOOL)_repopulateRecursivePropertiesIfNecessary;
- (BOOL)_insertRecursiveProperties;
- (BOOL)_updateRecursiveProperties;
- (BOOL)_recomputeChildItemCount;
- (void)updateFromServerItem:(id)a0;
- (void)updateWithContentModificationDate:(id)a0;
- (void)markRemovedFromFilesystemRecursively:(BOOL)a0;

@end
