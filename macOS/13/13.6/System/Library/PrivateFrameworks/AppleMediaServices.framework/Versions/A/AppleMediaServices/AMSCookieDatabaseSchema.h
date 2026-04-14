@interface AMSCookieDatabaseSchema : NSObject

+ (BOOL)promptTapToRadarForSchemaMigrationFailureWithDescription:(id)a0 error:(id *)a1;
+ (BOOL)createOrUpdateSchemaUsingConnection:(id)a0;
+ (void)migrateVersion0to1WithMigration:(id)a0;

@end
