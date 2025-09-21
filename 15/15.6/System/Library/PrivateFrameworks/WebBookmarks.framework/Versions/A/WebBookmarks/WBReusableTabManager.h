@class NSSet, NSString, NSTimer, NSCache;

@interface WBReusableTabManager : NSObject <NSCacheDelegate, WBTabGroupManagerObserver> {
    NSCache *_uuidToTabCache;
    char _reusing;
    NSTimer *_cleanupTimer;
    char _pendingCleanup;
}

@property (class, readonly, nonatomic) WBReusableTabManager *sharedManager;

@property (readonly, copy, nonatomic) NSSet *allGroupsTabsUUIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)_cleanUp;
- (void)addReusableTab:(id)a0;
- (char)isTabSuspended:(id)a0;
- (id)tabGroupManager;
- (void)enumerateReusableTabs:(id /* block */)a0;
- (id)reuseTabForUUID:(id)a0;
- (void)tabGroupManager:(id)a0 didRemoveTabGroupWithUUID:(id)a1;
- (id)windowStates;
- (void)_addTabUUIDsFromGroup:(id)a0 toSet:(id)a1;
- (void)_scheduleCleanup;
- (id)referenceToTabWithUUID:(id)a0;
- (void)removeReusableTabWithUUID:(id)a0;

@end
