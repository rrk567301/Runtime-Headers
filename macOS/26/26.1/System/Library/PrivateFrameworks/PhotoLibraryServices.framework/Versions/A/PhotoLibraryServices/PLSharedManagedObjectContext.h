@interface PLSharedManagedObjectContext : PLManagedObjectContext {
    id _changeNotificationObserver;
}

- (void)performBlock:(id /* block */)a0;
- (BOOL)shouldMergeFromRemoteContextWithChanges:(id)a0;
- (void)_mergeChangesFromDidSaveDictionary:(id)a0 usingObjectIDs:(BOOL)a1;
- (void)_pl_setupStalenessInterval;
- (void)setupLocalChangeNotifications;
- (void).cxx_destruct;
- (void)tearDownLocalChangeNotifications;
- (BOOL)isUserInterfaceContext;
- (BOOL)_hasChangesForCloudShared:(id)a0;
- (void)performBlockAndWait:(id /* block */)a0;

@end
