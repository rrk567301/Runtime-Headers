@interface CADMigrationOperationGroup : CADOperationGroup <CADMigrationInterface>

+ (BOOL)requiresEventAccess;

- (void)CADMigrateDatabaseIfNeeded:(id /* block */)a0;
- (void)CADMigrateReminderTruthFilesIfNeeded:(id /* block */)a0;
- (void)CADTruthFileMigrationIsComplete:(id /* block */)a0;

@end
