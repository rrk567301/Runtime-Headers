@class NSDictionary, NSManagedObjectModel, NSMutableSet, NSSQLModel, NSMutableArray, NSNumber;

@interface PFCloudKitMetadataMigrationContext : NSObject {
    NSMutableArray *_migrationStatements;
    NSMutableArray *_sqlEntitiesToCreate;
    NSMutableSet *_constrainedEntitiesToPreflight;
    char _hasWorkToDo;
    char _needsMetdataMigrationToNSCKRecordMetadata;
    char _needsOldTableDrop;
    char _needsMirroredRelationshipsLinkedToZone;
    char _needsImportAfterClientMigration;
    char _needsBatchUpdateForSystemFieldsAndLastExportedTransaction;
    char _needsAnalyzedHistoryCheck;
    char _needsCleanupFromNeedsNewShareInvitationBug;
    char _needsCleanupFromOrphanedMirroredRelationships;
    NSManagedObjectModel *_currentModel;
    NSSQLModel *_sqlModel;
    NSManagedObjectModel *_storeMetadataModel;
    NSSQLModel *_storeSQLModel;
    NSNumber *_storeMetadataVersion;
    NSDictionary *_storeMetadataVersionHashes;
}

- (void)dealloc;
- (id)init;
- (void)addConstrainedEntityToPreflight:(id)a0;

@end
