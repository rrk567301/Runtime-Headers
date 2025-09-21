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

- (id)_serverChildItemCount;
- (BOOL)isShareableItem;
- (id)childItemCount;
- (id)asShareableItem;
- (BOOL)isCrossZoneMoveTombstone;
- (void)markNeedsDeleteForItemIDTransfer;
- (void)_insertZombieForCrossZoneMove;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (void)_learnItemID:(id)a0 serverItem:(id)a1;
- (BOOL)containsDirFault;
- (BOOL)_deleteFromDB:(id)a0 keepAliases:(BOOL)a1;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (id)folderAppLibraryRootRecord;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (unsigned long long)diffAgainstLocalItem:(id)a0;
- (void)updateWithContentModificationDate:(id)a0;
- (BOOL)isDirectoryFault;
- (BOOL)containsOverQuotaItems;
- (BOOL)_updateRecursiveProperties;
- (void)prepareForSyncUpInZone:(id)a0;
- (void)documentsDirectoryUpdatedDocumentsScopePublic;
- (id)collaborationIdentifierIfComputable;
- (BOOL)isDirectoryWithPackageName;
- (void)forceSignalPropagationToChildren;
- (BOOL)isSharedByMeOrContainsSharedByMeItem;
- (void)markDirectoryMergeOrCrossZonePropagationComplete;
- (BOOL)isDirectory;
- (BOOL)isSharedToMeOrContainsSharedToMeItem;
- (id)descriptionWithContext:(id)a0;
- (BOOL)updateFromServerItem:(id)a0;
- (BOOL)handlePathMatchConflictForDirectoryCreationIfNecessary;
- (id)_initWithLocalItem:(id)a0;
- (void)updateItemMetadataFromServerItem:(id)a0 appliedSharingPermission:(BOOL)a1;
- (BOOL)_repopulateRecursivePropertiesIfNecessary;
- (BOOL)hasShareIDAndIsOwnedByMe;
- (BOOL)hasLiveChildren;
- (id)folderRootStructureRecord;
- (BOOL)containsPendingDeleteDocuments;
- (void)markRemovedFromFilesystemRecursively:(BOOL)a0;
- (BOOL)mergeContentsIntoDirectory:(id)a0;
- (void)_crossZoneMoveToParent:(id)a0;
- (BOOL)containsPendingUploadOrSyncUp;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (BOOL)_insertRecursiveProperties;
- (void)_markZombieForCrossZoneMove;
- (void)_signalPropagationToChildrenForce:(BOOL)a0;
- (void)signalPropagationToChildren;
- (id)_serverChildItemCountIncludingHiddenFiles;
- (void)transformIntoFSRoot;
- (BOOL)_recomputeChildItemCount;
- (BOOL)isAppLibraryTrashFolder;
- (id)serverQuotaUsage;
- (void)markChildPropagationComplete;
- (BOOL)possiblyContainsSharedItem;
- (BOOL)hasDeadChildren;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)a0;
- (void).cxx_destruct;

@end
