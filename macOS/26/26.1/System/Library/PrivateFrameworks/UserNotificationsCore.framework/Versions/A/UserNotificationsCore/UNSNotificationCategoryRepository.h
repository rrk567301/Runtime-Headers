@class NSString, UNCKeyedObservable, UNCKeyedDataStoreRepository, NSObject;
@protocol OS_dispatch_queue;

@interface UNSNotificationCategoryRepository : NSObject <UNSNotificationCategoryRepository> {
    UNCKeyedDataStoreRepository *_repository;
    UNCKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)a0;
- (long long)_maxObjectsPerKey;
- (id)initWithDataStoreRepository:(id)a0 observable:(id)a1;
- (void)removeObserver:(id)a0 forBundleIdentifier:(id)a1;
- (id)initWithDirectory:(id)a0 librarian:(id)a1 repositoryProtectionStrategy:(id)a2;
- (id)categoryWithIdentifier:(id)a0 bundleIdentifier:(id)a1;
- (void)notificationSourcesDidUninstall:(id)a0;
- (id)categoriesForBundleIdentifier:(id)a0;
- (id)_queue_categoriesForBundleIdentifier:(id)a0;
- (void)_queue_notificationSourcesDidUninstall:(id)a0;
- (void)_queue_setCategories:(id)a0 forBundleIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setCategories:(id)a0 forBundleIdentifier:(id)a1;
- (id)allBundleIdentifiers;
- (void)addObserver:(id)a0 forBundleIdentifier:(id)a1;

@end
