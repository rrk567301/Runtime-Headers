@interface PLSharedManagedObjectContext : PLManagedObjectContext {
    id _changeNotificationObserver;
}

- (void)performBlockAndWait:(id /* block */)a0;
- (void)_mergeChangesFromDidSaveDictionary:(id)a0 usingObjectIDs:(BOOL)a1;
- (void)_pl_setupStalenessInterval;
- (void)setupLocalChangeNotifications;
- (BOOL)shouldMergeFromRemoteContextWithChanges:(id)a0;
- (BOOL)isUserInterfaceContext;
- (void)tearDownLocalChangeNotifications;
- (BOOL)_hasChangesForCloudShared:(id)a0;
- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;

@end
