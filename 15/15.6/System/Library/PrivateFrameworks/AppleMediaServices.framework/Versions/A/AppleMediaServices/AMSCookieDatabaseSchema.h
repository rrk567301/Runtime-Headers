@interface AMSCookieDatabaseSchema : NSObject

+ (char)promptTapToRadarForSchemaMigrationFailureWithDescription:(id)a0 error:(id *)a1;
+ (id)_deviceStorageDetails;
+ (char)createOrUpdateSchemaUsingConnection:(id)a0;
+ (char)createOrUpdateSchemaUsingConnection:(id)a0 error:(id *)a1;
+ (char)migrateVersion0to1WithMigration:(id)a0 error:(id *)a1;

@end
