@class NSString, BRCDocumentItem, BRCAliasItem, BRCItemGlobalID, NSNumber;

@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable> {
    BOOL _needsDeleteForItemIDTransfer;
    NSNumber *_childItemCount;
}

@property (nonatomic) long long mtime;
@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) BRCItemGlobalID *previousItemGlobalID;
@property (readonly, nonatomic) NSString *unsaltedBookmarkData;

- (id)childItemCount;
- (void)markNeedsDeleteForItemIDTransfer;
- (void)documentsDirectoryUpdatedDocumentsScopePublic;
- (void)updateWithContentModificationDate:(id)a0;
- (void)updateItemMetadataFromServerItem:(id)a0 appliedSharingPermission:(BOOL)a1;
- (BOOL)containsDirFault;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (unsigned long long)diffAgainstLocalItem:(id)a0;
- (BOOL)_recomputeChildItemCount;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)a0;
- (BOOL)isShareableItem;
- (BOOL)containsPendingUploadOrSyncUp;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (void)_crossZoneMoveToParent:(id)a0;
- (BOOL)updateFromServerItem:(id)a0;
- (BOOL)isAppLibraryTrashFolder;
- (BOOL)mergeContentsIntoDirectory:(id)a0;
- (void)_learnItemID:(id)a0 serverItem:(id)a1;
- (BOOL)hasDeadChildren;
- (void)_markZombieForCrossZoneMove;
- (BOOL)isCrossZoneMoveTombstone;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (id)collaborationIdentifierIfComputable;
- (BOOL)_repopulateRecursivePropertiesIfNecessary;
- (BOOL)handlePathMatchConflictForDirectoryCreationIfNecessary:(id *)a0;
- (BOOL)isDirectoryWithPackageName;
- (BOOL)_deleteFromDB:(id)a0 keepAliases:(BOOL)a1;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (void)markRemovedFromFilesystemRecursively:(BOOL)a0;
- (BOOL)_updateRecursiveProperties;
- (id)_initWithLocalItem:(id)a0;
- (BOOL)hasShareIDAndIsOwnedByMe;
- (BOOL)isDirectory;
- (id)_serverChildItemCount;
- (void)prepareForSyncUpInZone:(id)a0;
- (id)folderAppLibraryRootRecord;
- (id)asShareableItem;
- (BOOL)isDirectoryFault;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (id)descriptionWithContext:(id)a0;
- (void)markChildPropagationComplete;
- (void)transformIntoFSRoot;
- (void)markDirectoryMergeOrCrossZonePropagationComplete;
- (BOOL)isSharedToMeOrContainsSharedToMeItem;
- (void).cxx_destruct;
- (id)folderRootStructureRecord;
- (BOOL)_insertRecursiveProperties;
- (BOOL)containsPendingDeleteDocuments;
- (id)serverQuotaUsage;
- (void)_insertZombieForCrossZoneMove;
- (BOOL)isSharedByMeOrContainsSharedByMeItem;
- (BOOL)containsOverQuotaItems;
- (void)_signalPropagationToChildrenForce:(BOOL)a0;
- (id)_serverChildItemCountIncludingHiddenFiles;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (BOOL)possiblyContainsSharedItem;
- (void)forceSignalPropagationToChildren;
- (void)_performDatabaseIntegrityCheckIfNeededAfterDeleteWithDB:(id)a0;
- (BOOL)hasLiveChildren;
- (void)signalPropagationToChildren;

@end
