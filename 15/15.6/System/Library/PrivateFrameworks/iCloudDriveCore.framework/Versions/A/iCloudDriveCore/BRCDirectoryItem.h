@class NSString, BRCDocumentItem, BRCAliasItem, BRCItemGlobalID, NSNumber;

@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable> {
    char _needsDeleteForItemIDTransfer;
    NSNumber *_childItemCount;
}

@property (nonatomic) long long mtime;
@property (readonly, nonatomic) BRCAliasItem *asBRAlias;
@property (readonly, nonatomic) BRCDirectoryItem *asDirectory;
@property (readonly, nonatomic) BRCDocumentItem *asDocument;
@property (readonly, nonatomic) BRCItemGlobalID *previousItemGlobalID;
@property (readonly, nonatomic) NSString *unsaltedBookmarkData;

- (void).cxx_destruct;
- (char)isDirectory;
- (id)childItemCount;
- (char)hasDeadChildren;
- (id)asShareableItem;
- (char)hasLiveChildren;
- (char)isShareableItem;
- (void)_crossZoneMoveToParent:(id)a0;
- (char)_deleteFromDB:(id)a0 keepAliases:(char)a1;
- (id)_initFromPQLResultSet:(id)a0 session:(id)a1 db:(id)a2 error:(id *)a3;
- (id)_initWithLocalItem:(id)a0;
- (id)_initWithServerItem:(id)a0 dbRowID:(unsigned long long)a1;
- (char)_insertInDB:(id)a0 dbRowID:(unsigned long long)a1;
- (char)_insertRecursiveProperties;
- (void)_insertZombieForCrossZoneMove;
- (void)_learnItemID:(id)a0 serverItem:(id)a1;
- (void)_markZombieForCrossZoneMove;
- (char)_recomputeChildItemCount;
- (char)_repopulateRecursivePropertiesIfNecessary;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)a0;
- (id)_serverChildItemCount;
- (id)_serverChildItemCountIncludingHiddenFiles;
- (void)_signalPropagationToChildrenForce:(char)a0;
- (char)_updateInDB:(id)a0 diffs:(unsigned long long)a1;
- (char)_updateRecursiveProperties;
- (id)clientZonesChildrenNeedingSyncUpAreIn;
- (id)collaborationIdentifierIfComputable;
- (char)containsDirFault;
- (char)containsOverQuotaItems;
- (char)containsPendingDeleteDocuments;
- (char)containsPendingUploadOrSyncUp;
- (id)descriptionWithContext:(id)a0;
- (unsigned long long)diffAgainstLocalItem:(id)a0;
- (unsigned long long)diffAgainstServerItem:(id)a0;
- (void)documentsDirectoryUpdatedDocumentsScopePublic;
- (id)folderAppLibraryRootRecord;
- (id)folderRootStructureRecord;
- (void)forceSignalPropagationToChildren;
- (char)handlePathMatchConflictForDirectoryCreationIfNecessary;
- (char)hasShareIDAndIsOwnedByMe;
- (char)isAppLibraryTrashFolder;
- (char)isCrossZoneMoveTombstone;
- (char)isDirectoryFault;
- (char)isDirectoryWithPackageName;
- (char)isSharedByMeOrContainsSharedByMeItem;
- (char)isSharedToMeOrContainsSharedToMeItem;
- (void)markChildPropagationComplete;
- (void)markDirectoryMergeOrCrossZonePropagationComplete;
- (void)markNeedsDeleteForItemIDTransfer;
- (void)markRemovedFromFilesystemRecursively:(char)a0;
- (char)mergeContentsIntoDirectory:(id)a0;
- (char)possiblyContainsSharedItem;
- (void)prepareForSyncUpInZone:(id)a0;
- (id)serverQuotaUsage;
- (void)signalPropagationToChildren;
- (void)transformIntoFSRoot;
- (char)updateFromServerItem:(id)a0;
- (void)updateItemMetadataFromServerItem:(id)a0 appliedSharingPermission:(char)a1;
- (void)updateWithContentModificationDate:(id)a0;

@end
