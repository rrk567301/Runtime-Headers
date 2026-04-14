@interface HDRacePreviousRouteSchemaProvider : NSObject

+ (id)databaseEntitiesForProtectionClass:(long long)a0;
+ (long long)currentSchemaVersionForProtectionClass:(long long)a0;
+ (void)registerMigrationStepsForProtectionClass:(long long)a0 migrator:(id)a1;

@end
