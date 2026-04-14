@interface CADSyncOperationGroup : CADOperationGroup <CADSyncInterface>

+ (BOOL)requiresEventAccess;

- (BOOL)accessGranted;
- (void)CADDatabaseGetDeletableCalendars:(id /* block */)a0;
- (void)CADDatabaseGetDeletableSources:(id /* block */)a0;

@end
