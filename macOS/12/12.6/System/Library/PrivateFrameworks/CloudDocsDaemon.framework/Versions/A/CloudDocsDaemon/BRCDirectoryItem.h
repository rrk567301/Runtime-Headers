@class NSString, BRCDocumentItem, BRCAliasItem;

@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable>

@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) long long mtime;
@property (readonly, nonatomic) NSString *unsaltedBookmarkData;

- (BOOL)isDirectory;
- (id)childItemCount;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (BOOL)isSharedByMeOrContainsSharedByMeItem;
- (BOOL)isSharedToMeOrContainsSharedToMeItem;
- (BOOL)isDirectoryFault;
- (id)serverQuotaUsage;
- (BOOL)changedAtRelativePath:(id)a0 scanPackage:(BOOL)a1;
- (id)asShareableItem;
- (BOOL)evictInTask:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)hasShareIDAndIsOwnedByMe;
- (BOOL)possiblyContainsSharedItem;
- (BOOL)isShareableItem;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (void)learnItemID:(id)a0 serverItem:(id)a1 path:(id)a2 markLost:(BOOL)a3;
- (BOOL)startDownloadInTask:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (BOOL)containsPendingUploadOrSyncUp;
- (BOOL)hasDeadChildren;
- (BOOL)isDirectoryWithPackageName;
- (id)_initWithRelativePath:(id)a0 parentGlobalID:(id)a1;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (BOOL)_deleteFromDB:(id)a0 keepAliases:(BOOL)a1;
- (BOOL)updateFromFSAtPath:(id)a0 parentGlobalID:(id)a1;
- (void)markRemovedFromFilesystemForServerEdit:(BOOL)a0;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)a0 parentGlobalID:(id)a1;
- (void)prepareForSyncUpInZone:(id)a0;
- (void)updateItemMetadataFromServerItem:(id)a0 appliedSharingPermission:(BOOL)a1;
- (id)folderRootStructureRecord;
- (BOOL)containsFault;
- (void)transformIntoFSRoot;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (BOOL)markChildrenLost;
- (BOOL)containsPendingDeleteDocuments;
- (BOOL)containsDirFault;
- (BOOL)containsPendingDownload;
- (BOOL)containsOverQuotaItems;
- (id)_serverChildItemCount;
- (BOOL)hasPendingLostChildren;
- (BOOL)_markChildrenLostForDeadParent;
- (BOOL)hasLostChildren;
- (void)_markLostDirectoryAsAlmostDead;
- (BOOL)_repopulateRecursivePropertiesIfNecessary;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)a0;
- (BOOL)_insertRecursiveProperties;
- (BOOL)_recomputeChildItemCount;
- (BOOL)_updateRecursiveProperties;
- (BOOL)hasLiveChildren;

@end
