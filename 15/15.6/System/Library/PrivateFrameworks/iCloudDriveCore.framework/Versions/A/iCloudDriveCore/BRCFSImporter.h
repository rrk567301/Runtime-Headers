@class NSString, BRCAccountSession, BRCFairSource, BRFileObjectID;

@interface BRCFSImporter : NSObject <BRCModule, BRCSuspendable> {
    BRCAccountSession *_session;
    BRCFairSource *_childPropagationSource;
    BRFileObjectID *_currentPropagationObject;
    unsigned long long _currentPropagationMinRowID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char isCancelled;

- (void).cxx_destruct;
- (void)close;
- (void)resume;
- (void)suspend;
- (void)cancel;
- (void)signal;
- (id)_locateTemplateItemFromFPFSMigration:(id)a0 fields:(unsigned long long *)a1 documentHasChanges:(char *)a2;
- (id)_parseImportBookmark:(id)a0 templateItem:(id)a1 fileURL:(id)a2 ignoreImportBookmark:(char *)a3;
- (void)_changeBasicFieldsOnItem:(id)a0 fields:(unsigned long long)a1 template:(id)a2;
- (void)_childPropagationSchedule;
- (void)_cleanItemBatchAfterMigrationToFPFSIfNecessary;
- (id)_createAndInsertNewItemWithImportObject:(id)a0 parentItem:(id)a1 fields:(unsigned long long)a2 templateItem:(id)a3 fileURL:(id)a4 options:(unsigned long long)a5 additionalAttrs:(id)a6 importBookmark:(id)a7 stillPendingFields:(unsigned long long *)a8 error:(id *)a9;
- (id)_createBaseItemWithImportObject:(id)a0 importBookmark:(id)a1 parentItem:(id)a2 options:(unsigned long long)a3 error:(id *)a4;
- (char)_deleteAppLibrary:(id)a0 documentsFolder:(id)a1 error:(id *)a2;
- (char)_doesAppLibraryMatchWithItemURL:(id)a0 appLibraryRowID:(id)a1;
- (id)_findCollidingItemWithTemplateItem:(id)a0 parentItem:(id)a1 logicalName:(id)a2 error:(id *)a3;
- (id)_globalItemByDocumentID:(unsigned int)a0;
- (id)_globalItemByFileID:(unsigned long long)a0;
- (id)_handleCollisionIfNecessaryWithTemplateItem:(id)a0 parentItem:(id)a1 logicalName:(id)a2 fileURL:(id)a3 options:(unsigned long long)a4 error:(id *)a5;
- (char)_isDesktopOrDocumentsItem:(id)a0;
- (unsigned char)_itemTypeToFileObjectIDType:(char)a0 itemID:(id)a1;
- (void)_learnEtagsIfNecessaryWithItem:(id)a0 changedFields:(unsigned long long)a1 baseVersion:(id)a2;
- (id)_locateMatchingItemForTemplateItem:(id)a0 parentItem:(id)a1 options:(unsigned long long)a2 fileURL:(id)a3 fields:(unsigned long long *)a4 shouldReject:(char *)a5 additionalAttrs:(id)a6 importBookmark:(id)a7 ignoreImportBookmark:(char *)a8 stillPendingFields:(unsigned long long *)a9 error:(id *)a10;
- (void)_markNextChildBatchDead:(id)a0 persistedState:(id)a1 batchSize:(int)a2;
- (void)_processIngestBatch:(id)a0 minRowID:(unsigned long long)a1;
- (char)_processParentAndFilenameIfNecessaryWithLocalItem:(id)a0 changedFields:(unsigned long long)a1 templateItem:(id)a2 error:(id *)a3;
- (void)_propagateDirectoryMergeOrCrossZoneMove:(id)a0 persistedState:(id)a1 batchSize:(int)a2;
- (void)_propagateFieldsToNextChildBatch:(id)a0 persistedState:(id)a1 minRowID:(unsigned long long)a2 batchSize:(int)a3;
- (void)_reportBouncingForMigration:(id)a0 existingItem:(id)a1;
- (void)_resolveConflictLosersForItem:(id)a0 localItem:(id)a1;
- (char)_shouldRejectItemDeleteDueToEtags:(id)a0 baseVersion:(id)a1 error:(id *)a2;
- (char)_shouldRejectItemWithName:(id)a0 templateItem:(id)a1 existingItem:(id)a2 options:(unsigned long long)a3 shouldRemoveItemFromDrive:(char *)a4;
- (char)_trashItem:(id)a0 error:(id *)a1;
- (void)_updateFPFSMigrationStatsForBouncing:(id)a0 existingItem:(id)a1;
- (unsigned short)capabilityToMoveItem:(id)a0 toNewParentItem:(id)a1 error:(id *)a2;
- (char)changeItem:(id)a0 baseVersion:(id)a1 changedFields:(unsigned long long)a2 newValues:(id)a3 contents:(id)a4 additionalAttrs:(id)a5 clearCKInfoOnSyncUp:(char)a6 stillPendingFields:(unsigned long long *)a7 error:(id *)a8;
- (id)createAndImportNewDirectoryWithLogicalName:(id)a0 parentItem:(id)a1 error:(id *)a2;
- (char)deleteItem:(id)a0 recursively:(char)a1 baseVersion:(id)a2 error:(id *)a3;
- (id)getOrCreateTrashItemInAppLibrary:(id)a0 error:(id *)a1;
- (id)importAppLibraryRootFromTemplateItem:(id)a0;
- (id)importNewItemAtURL:(id)a0 parentItem:(id)a1 templateItem:(id)a2 fields:(unsigned long long)a3 options:(unsigned long long)a4 additionalItemAttributes:(id)a5 importBookmark:(id)a6 stillPendingFields:(unsigned long long *)a7 error:(id *)a8;
- (id)initWithAccountSession:(id)a0;
- (char)isFPFSMigrationInProgress;
- (char)trashItem:(id)a0 parentItemInTrash:(id)a1 error:(id *)a2;

@end
