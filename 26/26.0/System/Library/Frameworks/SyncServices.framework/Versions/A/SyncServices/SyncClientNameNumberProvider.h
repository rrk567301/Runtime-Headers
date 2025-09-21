@interface SyncClientNameNumberProvider : ISDNameNumberProvider

- (id)manager;
- (void)dealloc;
- (void)allowNonPersistentCreation;
- (BOOL)canCreateNewMapping;
- (BOOL)foundMappingForNewName:(id)a0 inMap:(id)a1;
- (id)initWithSyncManager:(id)a0;

@end
