@interface PLSharedManagedObjectContext : PLManagedObjectContext {
    id _changeNotificationObserver;
}

- (void).cxx_destruct;
- (void)performBlock:(id /* block */)a0;
- (void)performBlockAndWait:(id /* block */)a0;
- (void)_mergeChangesFromDidSaveDictionary:(id)a0 usingObjectIDs:(BOOL)a1;
- (BOOL)isUserInterfaceContext;
- (void)setupLocalChangeNotifications;
- (void)tearDownLocalChangeNotifications;
- (BOOL)shouldMergeFromRemoteContextWithChanges:(id)a0;
- (BOOL)_hasChangesForCloudShared:(id)a0;

@end
