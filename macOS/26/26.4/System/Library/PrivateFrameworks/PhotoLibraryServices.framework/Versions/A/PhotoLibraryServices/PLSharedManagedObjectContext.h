@interface PLSharedManagedObjectContext : PLManagedObjectContext {
    id _changeNotificationObserver;
}

- (BOOL)shouldMergeFromRemoteContextWithChanges:(id)a0;
- (void)performBlockAndWait:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_pl_setupStalenessInterval;
- (BOOL)isUserInterfaceContext;
- (BOOL)_hasChangesForCloudShared:(id)a0;
- (void)setupLocalChangeNotifications;
- (void)tearDownLocalChangeNotifications;
- (void)_mergeChangesFromDidSaveDictionary:(id)a0 usingObjectIDs:(BOOL)a1;

@end
