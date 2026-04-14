@interface WFProgressiveCoreDataMigrator : NSObject

+ (id)customModificationsStepForSchemaWithIdentifier:(id)a0;
+ (BOOL)migrateDatabaseAtPersistentStoreDescription:(id)a0 error:(id *)a1;

@end
