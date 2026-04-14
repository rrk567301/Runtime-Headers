@interface PLSharedManagedObjectContext : PLManagedObjectContext {
    id _changeNotificationObserver;
}

- (void)performBlockAndWait:(id /* block */)a0;
- (void)tearDownLocalChangeNotifications;
- (BOOL)isUserInterfaceContext;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setupLocalChangeNotifications;
- (void)_mergeChangesFromDidSaveDictionary:(id)a0 usingObjectIDs:(BOOL)a1;
- (BOOL)_hasChangesForCloudShared:(id)a0;
- (BOOL)shouldMergeFromRemoteContextWithChanges:(id)a0;
- (void)_pl_setupStalenessInterval;

@end
