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

- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (void)dealloc;
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (void)_assertNotRunningOnAccessQueue;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (id)init;
- (void)_assertRunningOnAccessQueue;
- (id)_performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (id)performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (void)_loadContentProtectionStatusIfNeeded;
- (void).cxx_destruct;

@end
