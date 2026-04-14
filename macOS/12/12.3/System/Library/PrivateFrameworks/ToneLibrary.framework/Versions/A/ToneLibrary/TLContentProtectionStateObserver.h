@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TLContentProtectionStateObserver : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    NSMutableDictionary *_blocksScheduledForProtectedContentUnlockedEvent;
    long long _contentProtectionStatus;
    long long _unlockedSinceBootStatus;
}

@property (class, readonly) TLContentProtectionStateObserver *sharedContentProtectionStateObserver;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (void)_assertRunningOnAccessQueue;
- (void)_loadContentProtectionStatusIfNeeded;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (id)performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (void)_assertNotRunningOnAccessQueue;
- (long long)_queryCurrentUnlockedSinceBootStatus;

@end
