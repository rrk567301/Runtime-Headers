@class UNCKeyedObservable, UNCBundleLibrarian, NSObject, UNCKeyedDataStoreRepository;
@protocol OS_dispatch_queue;

@interface UNCPendingNotificationRepository : NSObject {
    UNCKeyedDataStoreRepository *_repository;
    UNCKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
    UNCBundleLibrarian *_librarian;
}

- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (void)_queue_notificationSourcesDidUninstall:(id)a0;
- (id)initWithDirectory:(id)a0 librarian:(id)a1 repositoryProtectionStrategy:(id)a2;
- (long long)_maxObjectsPerKey;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (id)allBundleIdentifiers;
- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)removeStoreForBundleIdentifier:(id)a0;
- (void)_queue_notifyObserversOfChangesFrom:(id)a0 to:(id)a1 forBundleIdentifier:(id)a2;
- (id)_queue_pendingNotificationDictionariesForBundleIdentifier:(id)a0;
- (id)_queue_pendingNotificationRecordsForBundleIdentifier:(id)a0;
- (void)_queue_setPendingNotificationDictionaries:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_setPendingNotificationRecords:(id)a0 forBundleIdentifier:(id)a1;
- (id)initWithDataStoreRepository:(id)a0 observable:(id)a1 librarian:(id)a2;
- (id)pendingNotificationRecordsForBundleIdentifier:(id)a0;
- (void)setPendingNotificationRecords:(id)a0 forBundleIdentifier:(id)a1;

@end
