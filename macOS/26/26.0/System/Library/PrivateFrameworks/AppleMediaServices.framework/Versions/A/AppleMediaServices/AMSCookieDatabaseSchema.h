@interface AMSCookieDatabaseSchema : NSObject

+ (void)_sendAutoBugCaptureReportWithSubtypeContext:(id)a0;
+ (BOOL)promptTapToRadarForSchemaMigrationFailureWithDescription:(id)a0 error:(id *)a1;
+ (BOOL)createOrUpdateSchemaUsingConnection:(id)a0 error:(id *)a1;
+ (BOOL)migrateVersion0to1WithMigration:(id)a0 error:(id *)a1;
+ (BOOL)createOrUpdateSchemaUsingConnection:(id)a0;

@end
