@class NSString, NSCache, NSTimer;

@interface WBReusableTabManager : NSObject <NSCacheDelegate, WBTabGroupManagerObserver> {
    NSCache *_uuidToTabCache;
    BOOL _reusing;
    NSTimer *_cleanupTimer;
    BOOL _pendingCleanup;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)cache:(id)a0 willEvictObject:(id)a1;
- (void)_cleanup;
- (id)windowStates;
- (BOOL)isTabSuspended:(id)a0;
- (id)tabGroupManager;
- (id)reuseTabForUUID:(id)a0;
- (void)addReusableTab:(id)a0;
- (void)tabGroupManager:(id)a0 didRemoveTabGroup:(id)a1;
- (void)enumerateReusableTabs:(id /* block */)a0;
- (void)_scheduleCleanup;
- (id)allGroupsTabsUUIDs;
- (void)_addTabUUIDsFromGroup:(id)a0 toSet:(id)a1;
- (id)_referenceToTabWithUUID:(id)a0;

@end
