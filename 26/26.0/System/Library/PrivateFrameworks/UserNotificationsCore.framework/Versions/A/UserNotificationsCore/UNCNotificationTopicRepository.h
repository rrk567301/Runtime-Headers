@class NSObject, UNCKeyedDataStoreRepository, UNCKeyedObservable;
@protocol OS_dispatch_queue;

@interface UNCNotificationTopicRepository : NSObject {
    UNCKeyedDataStoreRepository *_repository;
    UNCKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (void)_queue_notificationSourcesDidUninstall:(id)a0;
- (id)initWithDataStoreRepository:(id)a0 observable:(id)a1;
- (id)initWithDirectory:(id)a0 librarian:(id)a1 repositoryProtectionStrategy:(id)a2;
- (long long)_maxObjectsPerKey;
- (void)notificationSourcesDidUninstall:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (id)allBundleIdentifiers;
- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;
- (void)_queue_setTopics:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)_queue_topicsForBundleIdentifier:(id)a0;
- (void)setTopics:(id)a0 forBundleIdentifier:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)topicsForBundleIdentifier:(id)a0;

@end
