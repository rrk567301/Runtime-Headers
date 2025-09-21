@interface PLSharedManagedObjectContext : PLManagedObjectContext {
    id _changeNotificationObserver;
}

- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;
- (void)performBlockAndWait:(id /* block */)a0;
- (void)_mergeChangesFromDidSaveDictionary:(id)a0 usingObjectIDs:(char)a1;
- (char)_hasChangesForCloudShared:(id)a0;
- (void)_pl_setupStalenessInterval;
- (char)isUserInterfaceContext;
- (void)setupLocalChangeNotifications;
- (char)shouldMergeFromRemoteContextWithChanges:(id)a0;
- (void)tearDownLocalChangeNotifications;

@end
