@interface AMSEngagementCacheDatabaseSchema : NSObject

+ (void)_migrateVersion0to1WithMigration:(id)a0;
+ (BOOL)createOrUpdateSchemaUsingConnection:(id)a0;

@end
