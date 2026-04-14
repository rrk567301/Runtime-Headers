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

- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (id)childItemCount;
- (BOOL)isDirectory;
- (void)markChildPropagationComplete;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (void)_insertZombieForCrossZoneMove;
- (BOOL)isDirectoryFault;
- (void)_signalPropagationToChildrenForce:(BOOL)a0;
- (void)markNeedsDeleteForItemIDTransfer;
- (BOOL)hasLiveChildren;
- (void)markDirectoryMergeOrCrossZonePropagationComplete;
- (void)forceSignalPropagationToChildren;
- (BOOL)isShareableItem;
- (void)_crossZoneMoveToParent:(id)a0;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)a0;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (BOOL)isSharedToMeOrContainsSharedToMeItem;
- (id)folderRootStructureRecord;
- (id)folderAppLibraryRootRecord;
- (void)prepareForSyncUpInZone:(id)a0;
- (BOOL)handlePathMatchConflictForDirectoryCreationIfNecessary;
- (BOOL)isSharedByMeOrContainsSharedByMeItem;
- (void)_learnItemID:(id)a0 serverItem:(id)a1;
- (BOOL)isCrossZoneMoveTombstone;
- (BOOL)hasDeadChildren;
- (BOOL)isAppLibraryTrashFolder;
- (void)transformIntoFSRoot;
- (void)updateItemMetadataFromServerItem:(id)a0 appliedSharingPermission:(BOOL)a1;
- (BOOL)containsPendingDeleteDocuments;
- (id)_serverChildItemCount;
- (void)documentsDirectoryUpdatedDocumentsScopePublic;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (BOOL)updateFromServerItem:(id)a0;
- (id)serverQuotaUsage;
- (BOOL)_insertRecursiveProperties;
- (BOOL)_recomputeChildItemCount;
- (BOOL)possiblyContainsSharedItem;
- (BOOL)_updateRecursiveProperties;
- (BOOL)mergeContentsIntoDirectory:(id)a0;
- (id)_serverChildItemCountIncludingHiddenFiles;
- (BOOL)containsDirFault;
- (void).cxx_destruct;
- (BOOL)containsPendingUploadOrSyncUp;
- (BOOL)_repopulateRecursivePropertiesIfNecessary;
- (void)_markZombieForCrossZoneMove;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (BOOL)containsOverQuotaItems;
- (id)asShareableItem;
- (id)collaborationIdentifierIfComputable;
- (unsigned long long)diffAgainstLocalItem:(id)a0;
- (BOOL)hasShareIDAndIsOwnedByMe;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)_deleteFromDB:(id)a0 keepAliases:(BOOL)a1;
- (id)_initWithLocalItem:(id)a0;
- (void)markRemovedFromFilesystemRecursively:(BOOL)a0;
- (BOOL)isDirectoryWithPackageName;
- (id)descriptionWithContext:(id)a0;
- (void)updateWithContentModificationDate:(id)a0;
- (void)signalPropagationToChildren;

@end
