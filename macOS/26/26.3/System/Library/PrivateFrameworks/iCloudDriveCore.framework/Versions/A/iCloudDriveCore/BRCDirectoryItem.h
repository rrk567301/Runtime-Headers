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

- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)a0;
- (BOOL)updateFromServerItem:(id)a0;
- (id)folderRootStructureRecord;
- (BOOL)hasShareIDAndIsOwnedByMe;
- (id)_serverChildItemCount;
- (BOOL)isDirectoryWithPackageName;
- (void)_learnItemID:(id)a0 serverItem:(id)a1;
- (void)documentsDirectoryUpdatedDocumentsScopePublic;
- (unsigned long long)diffAgainstLocalItem:(id)a0;
- (void)_signalPropagationToChildrenForce:(BOOL)a0;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (id)folderAppLibraryRootRecord;
- (BOOL)isAppLibraryTrashFolder;
- (void)updateWithContentModificationDate:(id)a0;
- (id)asShareableItem;
- (BOOL)isSharedByMeOrContainsSharedByMeItem;
- (id)_initWithLocalItem:(id)a0;
- (void)markNeedsDeleteForItemIDTransfer;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (void)prepareForSyncUpInZone:(id)a0;
- (id)collaborationIdentifierIfComputable;
- (void)_markZombieForCrossZoneMove;
- (void)updateItemMetadataFromServerItem:(id)a0 appliedSharingPermission:(BOOL)a1;
- (BOOL)isSharedToMeOrContainsSharedToMeItem;
- (id)serverQuotaUsage;
- (BOOL)isCrossZoneMoveTombstone;
- (id)_serverChildItemCountIncludingHiddenFiles;
- (BOOL)isDirectoryFault;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)isShareableItem;
- (void)_crossZoneMoveToParent:(id)a0;
- (BOOL)_deleteFromDB:(id)a0 keepAliases:(BOOL)a1;
- (void)markRemovedFromFilesystemRecursively:(BOOL)a0;
- (BOOL)isDirectory;
- (void)markChildPropagationComplete;
- (BOOL)handlePathMatchConflictForDirectoryCreationIfNecessary;
- (id)descriptionWithContext:(id)a0;
- (void)markDirectoryMergeOrCrossZonePropagationComplete;
- (id)childItemCount;
- (BOOL)hasDeadChildren;
- (BOOL)hasLiveChildren;
- (void).cxx_destruct;
- (BOOL)containsOverQuotaItems;
- (BOOL)containsPendingUploadOrSyncUp;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (BOOL)mergeContentsIntoDirectory:(id)a0;
- (void)_insertZombieForCrossZoneMove;
- (void)signalPropagationToChildren;
- (BOOL)containsDirFault;
- (BOOL)containsPendingDeleteDocuments;
- (BOOL)possiblyContainsSharedItem;
- (BOOL)_repopulateRecursivePropertiesIfNecessary;
- (void)forceSignalPropagationToChildren;
- (void)transformIntoFSRoot;
- (BOOL)_recomputeChildItemCount;
- (BOOL)_insertRecursiveProperties;
- (BOOL)_updateRecursiveProperties;

@end
