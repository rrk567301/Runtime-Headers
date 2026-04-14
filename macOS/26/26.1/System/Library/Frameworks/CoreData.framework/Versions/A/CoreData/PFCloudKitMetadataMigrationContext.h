@class NSDictionary, NSMutableDictionary, NSManagedObjectModel, NSMutableSet, NSSQLModel, NSMutableArray, NSNumber;

@interface PFCloudKitMetadataMigrationContext : NSObject {
    NSMutableArray *_migrationStatements;
    NSMutableArray *_sqlEntitiesToCreate;
    NSMutableSet *_constrainedEntitiesToPreflight;
    NSMutableArray *_columnsToDrop;
    NSMutableDictionary *_storeTableNameToColumnNames;
    BOOL _hasWorkToDo;
    BOOL _needsMetdataMigrationToNSCKRecordMetadata;
    BOOL _needsOldTableDrop;
    BOOL _needsMirroredRelationshipsLinkedToZone;
    BOOL _needsImportAfterClientMigration;
    BOOL _needsBatchUpdateForSystemFieldsAndLastExportedTransaction;
    BOOL _needsAnalyzedHistoryCheck;
    BOOL _needsCleanupFromNeedsNewShareInvitationBug;
    BOOL _needsCleanupFromOrphanedMirroredRelationships;
    NSManagedObjectModel *_currentModel;
    NSSQLModel *_sqlModel;
    NSManagedObjectModel *_storeMetadataModel;
    NSSQLModel *_storeSQLModel;
    NSNumber *_storeMetadataVersion;
    NSDictionary *_storeMetadataVersionHashes;
}

- (void)dealloc;
- (void)addColumnNames:(id)a0 forTableName:(id)a1;
- (id)init;

@end
