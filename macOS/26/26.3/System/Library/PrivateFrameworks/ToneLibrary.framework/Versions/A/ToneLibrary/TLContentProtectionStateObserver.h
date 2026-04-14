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
- (void)cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (id)init;
- (long long)_queryCurrentUnlockedSinceBootStatus;
- (id)performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (void)_assertNotRunningOnAccessQueue;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_loadContentProtectionStatusIfNeeded;
- (id)_performBlockAfterProtectedContentUnlocked:(id /* block */)a0;
- (void)_cancelBlockScheduledForProtectedContentUnlockedEventWithToken:(id)a0;
- (void)_assertRunningOnAccessQueue;

@end
