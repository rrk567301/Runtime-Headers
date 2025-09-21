@class NSSQLiteAdapter, NSString, NSSQLCore, NSArray, NSMutableDictionary, NSSQLiteConnection, NSMutableArray, NSMappingModel, NSSQLModel;

@interface _NSSQLiteStoreMigrator : NSObject {
    NSSQLCore *_store;
    NSSQLModel *_dstModel;
    NSSQLModel *_srcModel;
    NSSQLiteAdapter *_adapter;
    NSMappingModel *_mappingModel;
    NSSQLiteConnection *_connection;
    NSArray *_tableGenerationSQL;
    NSArray *_existingTableNames;
    NSMutableDictionary *_reindexedEntities;
    NSMutableDictionary *_reindexedPropertiesByEntity;
    NSMutableDictionary *_sourceToDestinationEntityMap;
    NSMutableDictionary *_addedEntityMigrations;
    NSMutableDictionary *_removedEntityMigrations;
    NSMutableDictionary *_transformedEntityMigrations;
    NSMutableDictionary *_copiedEntityMigrations;
    NSMutableDictionary *_tableMigrationDescriptionsByEntity;
    char _hasPKTableChanges;
    NSMutableArray *_pkTableUpdateStatements;
    NSMutableDictionary *_attributeExtensionsToUpdate;
    NSMutableArray *_indexesToCreate;
    NSMutableArray *_indexesToDrop;
    NSMutableArray *_defaultValueStatements;
    NSMutableArray *_derivationsToDrop;
    NSMutableArray *_derivationsToRun;
    NSMutableDictionary *_historyMigrationPropertyDataForEntityCache;
    NSMutableArray *_cloudKitUpdateStatements;
    char _hasCloudKitTables;
    char _hasDeferredLightweightMigration;
    char _forcedMigration;
    NSString *_stageLabel;
}

@property (retain, nonatomic) NSString *destinationConfigurationForCloudKitValidation;

+ (void)_setAnnotatesMigrationMetadata:(char)a0;
+ (char)_annotatesMigrationMetadata;

- (void)dealloc;

@end
