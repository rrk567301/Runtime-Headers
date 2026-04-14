@interface PLSharedManagedObjectContext : PLManagedObjectContext {
    id _changeNotificationObserver;
}

- (void).cxx_destruct;
- (void)_mergeChangesFromDidSaveDictionary:(id)a0 usingObjectIDs:(BOOL)a1;
- (void)setupLocalChangeNotifications;
- (void)tearDownLocalChangeNotifications;
- (BOOL)isUserInterfaceContext;
- (BOOL)shouldMergeFromRemoteContextWithChanges:(id)a0;
- (BOOL)_hasChangesForCloudShared:(id)a0;

@end
