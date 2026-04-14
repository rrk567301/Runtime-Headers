@interface CADSyncOperationGroup : CADOperationGroup <CADSyncInterface>

+ (BOOL)requiresEventAccess;

- (BOOL)accessGranted;
- (void)CADDatabaseGetDeletableSources:(id /* block */)a0;
- (void)CADDatabaseGetDeletableCalendars:(id /* block */)a0;

@end
