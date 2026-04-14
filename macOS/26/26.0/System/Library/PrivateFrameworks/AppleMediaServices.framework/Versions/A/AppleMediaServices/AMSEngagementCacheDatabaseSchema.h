@interface AMSEngagementCacheDatabaseSchema : NSObject

+ (BOOL)createOrUpdateSchemaUsingConnection:(id)a0 error:(out id *)a1;
+ (void)_migrateVersion0to1WithMigration:(id)a0;

@end
