@interface AMSEngagementCacheDatabaseSchema : NSObject

+ (void)_migrateVersion0to1WithMigration:(id)a0;
+ (char)createOrUpdateSchemaUsingConnection:(id)a0 error:(out id *)a1;

@end
