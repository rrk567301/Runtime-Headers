@interface WFWorkflowMigrator : NSObject

+ (void)initialize;
+ (void)migrateWorkflowIfNeeded:(id)a0 completion:(id /* block */)a1;
+ (void)registerAllWorkflowKitMigrationClasses;
+ (void)registerMigrationClass:(Class)a0;
+ (id)migrationClasses;
+ (id)orderedMigrationClassesWithoutDependencies;
+ (id)migrationClassesWithDependencies;

@end
