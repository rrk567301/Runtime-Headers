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

- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (void)_assertNotRunningOnAccessQueue;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (id)_performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (void)_loadContentProtectionStatusIfNeeded;
- (void).cxx_destruct;
- (void)_assertRunningOnAccessQueue;
- (id)performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (id)init;
- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (void)dealloc;

@end
