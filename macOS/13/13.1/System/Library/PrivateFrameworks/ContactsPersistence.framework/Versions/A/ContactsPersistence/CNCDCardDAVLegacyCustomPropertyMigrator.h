@interface CNCDCardDAVLegacyCustomPropertyMigrator : CNCDMigrator

+ (id)os_log;

- (void)migrate;
- (void)saveContext;
- (void)runMigrationTask;

@end
