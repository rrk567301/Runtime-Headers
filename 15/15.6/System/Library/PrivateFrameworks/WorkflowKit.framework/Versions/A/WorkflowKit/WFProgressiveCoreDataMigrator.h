@interface WFProgressiveCoreDataMigrator : NSObject

+ (id)customModificationsStepForSchemaWithIdentifier:(id)a0;
+ (char)migrateDatabaseAtPersistentStoreDescription:(id)a0 useLockFile:(char)a1 error:(id *)a2;

@end
