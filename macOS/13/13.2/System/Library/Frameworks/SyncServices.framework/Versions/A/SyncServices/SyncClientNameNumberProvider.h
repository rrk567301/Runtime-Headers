@interface SyncClientNameNumberProvider : ISDNameNumberProvider

- (void)dealloc;
- (id)manager;
- (BOOL)foundMappingForNewName:(id)a0 inMap:(id)a1;
- (id)initWithSyncManager:(id)a0;
- (void)allowNonPersistentCreation;
- (BOOL)canCreateNewMapping;

@end
