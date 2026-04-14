@interface HDRacePreviousRouteSchemaProvider : NSObject

+ (void)registerMigrationStepsForProtectionClass:(long long)a0 migrator:(id)a1;
+ (long long)currentSchemaVersionForProtectionClass:(long long)a0;
+ (id)databaseEntitiesForProtectionClass:(long long)a0;

@end
