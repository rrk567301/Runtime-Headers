@interface CADAccessOperationGroup : CADOperationGroup <CADAccessInterface>

+ (BOOL)requiresEventAccess;

- (void)CADDatabaseSetInitializationOptions:(id)a0 reply:(id /* block */)a1;
- (void)CADDatabaseGetAccess:(id /* block */)a0;
- (void)CADDatabaseResetWithReply:(id /* block */)a0;

@end
