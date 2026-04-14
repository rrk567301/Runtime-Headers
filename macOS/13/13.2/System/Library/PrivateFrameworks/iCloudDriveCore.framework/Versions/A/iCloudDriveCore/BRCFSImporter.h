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
@property (readonly, nonatomic) BOOL isCancelled;

- (void)resume;
- (void)close;
- (void).cxx_destruct;
- (void)cancel;
- (void)suspend;
- (void)signal;
- (id)initWithAccountSession:(id)a0;
- (id)_createBaseItemWithImportObject:(id)a0 error:(id *)a1;
- (id)_globalItemByDocumentID:(unsigned int)a0;
- (id)_globalItemByFileID:(unsigned long long)a0;
- (BOOL)_shouldRejectItemWithName:(id)a0 templateItem:(id)a1 isDatalessDocument:(BOOL)a2 existingItem:(id)a3;
- (BOOL)_isDesktopOrDocumentsItem:(id)a0;
- (unsigned short)capabilityToMoveItem:(id)a0 toNewParentItem:(id)a1 error:(id *)a2;
- (void)_changeBasicFieldsOnItem:(id)a0 fields:(unsigned long long)a1 template:(id)a2;
- (void)_updateCiconiaDatabaseForBouncing:(id)a0 existingItem:(id)a1;
- (id)_extractBookmarkDataFromTemplateItem:(id)a0 isTrashBookmark:(BOOL *)a1;
- (id)_parseBookmarkXattrsOnTemplateItemIfNecessary:(id)a0 fileURL:(id)a1;
- (id)_locateTemplateItemFromFPFSImport:(id)a0 fields:(unsigned long long *)a1;
- (id)_parseIdentityXattrsOnTemplateItemIfNecessary:(id)a0 options:(unsigned long long)a1 fileURL:(id)a2 fields:(unsigned long long *)a3;
- (id)_findCollidingItemWithTemplateItem:(id)a0 parentItem:(id)a1 logicalName:(id)a2 error:(id *)a3;
- (id)_handleCollisionIfNecessaryWithTemplateItem:(id)a0 parentItem:(id)a1 logicalName:(id)a2 fileURL:(id)a3 options:(unsigned long long)a4 error:(id *)a5;
- (id)_locateMatchingItemForTemplateItem:(id)a0 parentItem:(id)a1 logicalName:(id)a2 options:(unsigned long long)a3 fileURL:(id)a4 fields:(unsigned long long *)a5 shouldReject:(BOOL *)a6 additionalAttrs:(id)a7 error:(id *)a8;
- (id)_createAndInsertNewItemWithImportObject:(id)a0 parentItem:(id)a1 fields:(unsigned long long)a2 templateItem:(id)a3 fileURL:(id)a4 options:(unsigned long long)a5 additionalAttrs:(id)a6 error:(id *)a7;
- (id)importAppLibraryFromTemplateItem:(id)a0;
- (id)importNewItemAtURL:(id)a0 logicalName:(id)a1 parentItem:(id)a2 templateItem:(id)a3 fields:(unsigned long long)a4 options:(unsigned long long)a5 additionalItemAttributes:(id)a6 error:(id *)a7;
- (id)createAndImportNewDirectoryWithLogicalName:(id)a0 parentItem:(id)a1 error:(id *)a2;
- (id)_getOrCreateTrashItemInAppLibrary:(id)a0 error:(id *)a1;
- (BOOL)_trashItem:(id)a0 error:(id *)a1;
- (BOOL)_untrashItem:(id)a0 toParentFileObjectID:(id)a1 error:(id *)a2;
- (BOOL)_processParentAndFilenameIfNecessaryWithLocalItem:(id)a0 changedFields:(unsigned long long)a1 templateItem:(id)a2 error:(id *)a3;
- (void)_learnEtagsIfNecessaryWithItem:(id)a0 changedFields:(unsigned long long)a1 baseVersion:(id)a2;
- (BOOL)changeItem:(id)a0 baseVersion:(id)a1 changedFields:(unsigned long long)a2 newValues:(id)a3 contents:(id)a4 additionalAttrs:(id)a5 clearCKInfoOnSyncUp:(BOOL)a6 error:(id *)a7;
- (void)_markNextChildBatchDead:(id)a0 persistedState:(id)a1 batchSize:(int)a2;
- (void)_propagateFieldsToNextChildBatch:(id)a0 persistedState:(id)a1 minRowID:(unsigned long long)a2 batchSize:(int)a3;
- (void)_processIngestBatch:(id)a0 minRowID:(unsigned long long)a1;
- (void)_cleanItemBatchAfterMigrationToFPFSIfNecessary;

@end
