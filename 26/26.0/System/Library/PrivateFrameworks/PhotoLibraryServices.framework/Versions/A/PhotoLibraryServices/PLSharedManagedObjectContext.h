@interface PLSharedManagedObjectContext : PLManagedObjectContext {
    id _changeNotificationObserver;
}

- (void)setupLocalChangeNotifications;
- (void)_pl_setupStalenessInterval;
- (void)_mergeChangesFromDidSaveDictionary:(id)a0 usingObjectIDs:(BOOL)a1;
- (void)performBlock:(id /* block */)a0;
- (void)tearDownLocalChangeNotifications;
- (BOOL)isUserInterfaceContext;
- (BOOL)shouldMergeFromRemoteContextWithChanges:(id)a0;
- (BOOL)_hasChangesForCloudShared:(id)a0;
- (void)performBlockAndWait:(id /* block */)a0;
- (void).cxx_destruct;

@end
