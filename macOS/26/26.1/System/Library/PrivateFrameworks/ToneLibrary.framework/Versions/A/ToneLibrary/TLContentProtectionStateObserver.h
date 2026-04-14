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

- (void)_loadUnlockedSinceBootStatusIfNeeded;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (id)_performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (void)dealloc;
- (void)_assertRunningOnAccessQueue;
- (void).cxx_destruct;
- (id)performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (void)_loadContentProtectionStatusIfNeeded;
- (void)_assertNotRunningOnAccessQueue;
- (id)init;

@end
