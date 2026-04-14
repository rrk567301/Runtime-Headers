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

- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)isDirectory;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (BOOL)isDirectoryWithPackageName;
- (BOOL)isCrossZoneMoveTombstone;
- (unsigned long long)diffAgainstLocalItem:(id)a0;
- (BOOL)mergeContentsIntoDirectory:(id)a0;
- (void)signalPropagationToChildren;
- (void)markRemovedFromFilesystemRecursively:(BOOL)a0;
- (void)markNeedsDeleteForItemIDTransfer;
- (id)descriptionWithContext:(id)a0;
- (void)updateItemMetadataFromServerItem:(id)a0 appliedSharingPermission:(BOOL)a1;
- (BOOL)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (BOOL)isShareableItem;
- (BOOL)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (void)transformIntoFSRoot;
- (void)updateWithContentModificationDate:(id)a0;
- (id)collaborationIdentifierIfComputable;
- (BOOL)_deleteFromDB:(id)a0 keepAliases:(BOOL)a1;
- (id)asShareableItem;
- (BOOL)updateFromServerItem:(id)a0;
- (BOOL)isDirectoryFault;
- (BOOL)hasShareIDAndIsOwnedByMe;
- (void)_learnItemID:(id)a0 serverItem:(id)a1;
- (id)_serverChildItemCountIncludingHiddenFiles;
- (id)_initWithLocalItem:(id)a0;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (void)prepareForSyncUpInZone:(id)a0;
- (void)forceSignalPropagationToChildren;
- (void)_crossZoneMoveToParent:(id)a0;
- (BOOL)isSharedToMeOrContainsSharedToMeItem;
- (BOOL)_recomputeChildItemCount;
- (id)_serverChildItemCount;
- (void)documentsDirectoryUpdatedDocumentsScopePublic;
- (void)_insertZombieForCrossZoneMove;
- (BOOL)isSharedByMeOrContainsSharedByMeItem;
- (void).cxx_destruct;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)a0;
- (void)markChildPropagationComplete;
- (BOOL)handlePathMatchConflictForDirectoryCreationIfNecessary;
- (BOOL)containsPendingDeleteDocuments;
- (BOOL)_insertRecursiveProperties;
- (BOOL)containsOverQuotaItems;
- (BOOL)hasDeadChildren;
- (BOOL)_updateRecursiveProperties;
- (BOOL)isAppLibraryTrashFolder;
- (BOOL)_repopulateRecursivePropertiesIfNecessary;
- (BOOL)possiblyContainsSharedItem;
- (void)_markZombieForCrossZoneMove;
- (void)_signalPropagationToChildrenForce:(BOOL)a0;
- (BOOL)containsDirFault;
- (void)markDirectoryMergeOrCrossZonePropagationComplete;
- (id)serverQuotaUsage;
- (id)folderRootStructureRecord;
- (id)childItemCount;
- (id)folderAppLibraryRootRecord;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (BOOL)hasLiveChildren;
- (BOOL)containsPendingUploadOrSyncUp;

@end
